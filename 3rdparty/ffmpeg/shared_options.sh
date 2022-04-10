#!/bin/sh

GENERAL="
   --disable-shared \
   --enable-static \
   --disable-iconv \
   --disable-videotoolbox \
   --enable-zlib \
   --disable-lzma \
   --disable-bzlib"

MODULES="\
   --disable-filters \
   --disable-programs \
   --disable-network \
   --disable-avdevice \
   --disable-postproc \
   --disable-encoders \
   --disable-doc \
   --disable-ffplay \
   --disable-ffprobe \
   --disable-ffmpeg"

VIDEO_DECODERS="\
   --enable-decoder=mov \
   --enable-decoder=h264 \
   --enable-decoder=mpeg4 \
   --enable-decoder=mpeg2video \
   --enable-decoder=mjpeg \
   --enable-decoder=mjpegb \
   --enable-decoder=mpeg2video"

AUDIO_DECODERS="\
    --enable-decoder=aac \
    --enable-decoder=atrac3 \
    --enable-decoder=atrac3p \
    --enable-decoder=atrac9 \
    --enable-decoder=mp3 \
    --enable-decoder=pcm_s16le \
    --enable-decoder=pcm_s8"

DEMUXERS="\
    --enable-demuxer=h264 \
    --enable-demuxer=mpegps \
    --enable-demuxer=mpegvideo \
    --enable-demuxer=mov \
    --enable-demuxer=avi \
    --enable-demuxer=mp3 \
    --enable-demuxer=aac \
    --enable-demuxer=oma \
    --enable-demuxer=pcm_s16le \
    --enable-demuxer=pcm_s8 \
    --enable-demuxer=wav"

VIDEO_ENCODERS="\
    --enable-encoder=ffv1
    --enable-encoder=mpeg4"

AUDIO_ENCODERS="\
    --enable-encoder=pcm_s16le"

MUXERS="\
    --enable-muxer=avi"

PARSERS="\
    --enable-parser=h264 \
    --enable-parser=mpeg4video \
    --enable-parser=mpegvideo \
    --enable-parser=aac \
    --enable-parser=mpegaudio"

PROTOCOLS="\
    --enable-protocol=file"

CONFIGURE_OPTS="\
    --disable-everything \
    ${GENERAL} \
    ${MODULES} \
    ${VIDEO_DECODERS} \
    ${AUDIO_DECODERS} \
    ${VIDEO_ENCODERS} \
    ${AUDIO_ENCODERS} \
    ${DEMUXERS} \
    ${MUXERS} \
    ${PARSERS} \
    ${PROTOCOLS}"
