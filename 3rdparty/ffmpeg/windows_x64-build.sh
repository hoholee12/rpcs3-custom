#!/bin/bash
#ffmpeg for windows x64
#windows_x64-build.sh requirements.
# MinGW
#
# WARNING: If cc_check fails, rename MingW/msys/1.0/bin/link.exe as it clashes with
# the MSVC one.
#
# MSYS
# 1. open command-prompt of Visual Studio (IMPORTANT: Correct bit-ness! There are both)
# 2. run msys.bat on the command-line.
# 3. $ cd /PathTo/ppsspp/ffmpeg
# 4. $ windows_x64-build.sh
#build requements.
# use toolchain=msvc
# http://ffmpeg.org/platform.html#Windows

#///////////////////////////////////////////////////////////////////////////////

set -e
rm -f config.mak

ARCH=x86_64

PREFIX="./Windows/${ARCH}"

mkdir -p ${PREFIX}

IS_STATIC_LIB=TRUE

IS_SHARED_LIB_INTO_BIN_DIR=FALSE

GENERAL="
    --toolchain=msvc
    --prefix=$PREFIX
    --arch=${ARCH}
    --disable-avdevice
    --disable-programs
    --disable-postproc
    --disable-doc
    --disable-pthreads
    --enable-w32threads
    --disable-network
    --disable-everything
    --disable-encoders
    --disable-muxers
    --disable-hwaccels
    --disable-parsers
    --disable-protocols
    --enable-dxva2
"

AUDIO_DECODERS="
    --enable-decoder=aac
    --enable-decoder=aac_latm
    --enable-decoder=atrac3
    --enable-decoder=atrac3p
    --enable-decoder=atrac9
    --enable-decoder=mp3
    --enable-decoder=pcm_s16le
    --enable-decoder=pcm_s8
"

VIDEO_DECODERS="
    --enable-decoder=mov
    --enable-decoder=h264
    --enable-decoder=mpeg4
    --enable-decoder=mpeg2video
    --enable-decoder=mjpeg
    --enable-decoder=mjpegb
"

AUDIO_ENCODERS="
    --enable-encoder=pcm_s16le
"

VIDEO_ENCODERS="
    --enable-encoder=ffv1
    --enable-encoder=mpeg4
"

HARDWARE_ACCELS="
    --enable-hwaccel=h264_dxva2
"

MUXERS="
    --enable-muxer=avi
"

DEMUXERS="
    --enable-demuxer=h264
    --enable-demuxer=m4v
    --enable-demuxer=mp3
    --enable-demuxer=mpegvideo
    --enable-demuxer=mpegps
    --enable-demuxer=mjpeg
    --enable-demuxer=mov
    --enable-demuxer=avi
    --enable-demuxer=aac
    --enable-demuxer=pmp
    --enable-demuxer=oma
    --enable-demuxer=pcm_s16le
    --enable-demuxer=pcm_s8
    --enable-demuxer=wav
"

PARSERS="
    --enable-parser=h264
    --enable-parser=mpeg4video
    --enable-parser=mpegaudio
    --enable-parser=mpegvideo
    --enable-parser=mjpeg
    --enable-parser=aac
    --enable-parser=aac_latm
"

PROTOCOLS="
    --enable-protocol=file
"

BSFS="
"

INPUT_DEVICES="
    --enable-indev=dshow
"

OUTPUT_DEVICES="
"

FILTERS=""

#///////////////////////////////////////////////////////////////////////////////

append() {
    var=$1
    shift
    eval "$var=\"\$$var $*\""
}

isstaticlib() {
    case "$IS_STATIC_LIB" in
        "TRUE" | "true" | "1" ) return 0 ;;
        *) return 1 ;;
    esac
}

isintobin() {
    case "$IS_SHARED_LIB_INTO_BIN_DIR" in
        "TRUE" | "true" | "1" ) return 0 ;;
        *) return 1 ;;
    esac
}

genelatelibparams() {
    ret=""
    if (isstaticlib) then
        ret=" --enable-static --disable-shared"
    else
        ret=" --enable-shared --disable-static"
    fi
    echo "$ret"
}

genelateparams() {
    eval "value=\"\$$1\""
    ret=""
    value=$(echo "$value" | sed "s/ //g")
    for var in $value ; do
        if [ ! `echo "$var" | fgrep -o "#"` ]; then
            ret="$ret $var"
        fi
    done
    echo "$ret"
}

params_dump() {
    eval "value=\"\$$1\""
    echo "---- dump configure params ----"
    IFS=" "
    for var in $value ; do
        echo "$var"
    done
    echo "---- end dump ----"
}


function build_ffmpeg
{
echo "Converting From CRLF To LF."
find ./ -regex "\(.*\.mak\|.*Makefile\)" | xargs dos2unix

echo "Generate configure params."

PARAMS="$(genelateparams GENERAL)\
$(genelatelibparams)\
$(echo -e "$(genelateparams AUDIO_DECODERS)")\
$(echo -e "$(genelateparams VIDEO_DECODERS)")\
$(echo -e "$(genelateparams AUDIO_ENCODERS)")\
$(echo -e "$(genelateparams VIDEO_ENCODERS)")\
$(echo -e "$(genelateparams BSFS)")\
$(echo -e "$(genelateparams PARSERS)")\
$(echo -e "$(genelateparams MUXERS)")\
$(echo -e "$(genelateparams DEMUXERS)")\
$(echo -e "$(genelateparams HARDWARE_ACCELS)")\
$(echo -e "$(genelateparams INPUT_DEVICES)")\
$(echo -e "$(genelateparams PROTOCOLS)")
"
params_dump PARAMS

echo "---- configure ----"
./configure --extra-cflags="-MT -IWindowsInclude -GS-" $PARAMS

echo "---- make clean ----"
make clean
echo "---- make install ----"
make install 2>&1 | tee build.log
echo "---- rename and copy for ppsspp ----"
if (isstaticlib) then
    pushd $PREFIX
    echo "Renaming "foo.a" to "foo.lib" in the build-directory."
    for fname in *.a; do
        mv -fv $fname $(echo "$fname" | sed -e "s/lib\(.*\)\.a/\1/").lib
    done
    popd
fi
echo "---- windows_x64-build.sh finished ----"
}
build_ffmpeg
