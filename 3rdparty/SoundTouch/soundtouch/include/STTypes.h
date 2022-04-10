////////////////////////////////////////////////////////////////////////////////
///
/// Common type definitions for SoundTouch audio processing library.
///
/// Author        : Copyright (c) Olli Parviainen
/// Author e-mail : oparviai 'at' iki.fi
/// SoundTouch WWW: http://www.surina.net/soundtouch
///
////////////////////////////////////////////////////////////////////////////////
//
// License :
//
//  SoundTouch audio processing library
//  Copyright (c) Olli Parviainen
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public
//  License as published by the Free Software Foundation; either
//  version 2.1 of the License, or (at your option) any later version.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with this library; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
////////////////////////////////////////////////////////////////////////////////

#ifndef STTypes_H
#define STTypes_H

typedef unsigned int    uint;
typedef unsigned long   ulong;

// Patch for MinGW: on Win64 long is 32-bit
#ifdef _WIN64
    typedef unsigned long long ulongptr;
#else
    typedef ulong ulongptr;
#endif


// Helper macro for aligning pointer up to next 16-byte boundary
#define SOUNDTOUCH_ALIGN_POINTER_16(x)      ( ( (ulongptr)(x) + 15 ) & ~(ulongptr)15 )


namespace soundtouch
{
    /// Max allowed number of channels
    #define SOUNDTOUCH_MAX_CHANNELS     16

    /// Activate these undef's to overrule the possible sampletype 
    /// setting inherited from some other header file:
    //#undef SOUNDTOUCH_INTEGER_SAMPLES
    //#undef SOUNDTOUCH_FLOAT_SAMPLES

    /// If following flag is defined, always uses multichannel processing 
    /// routines also for mono and stero sound. This is for routine testing 
    /// purposes; output should be same with either routines, yet disabling 
    /// the dedicated mono/stereo processing routines will result in slower 
    /// runtime performance so recommendation is to keep this off.
    // #define USE_MULTICH_ALWAYS

    #if !(SOUNDTOUCH_INTEGER_SAMPLES || SOUNDTOUCH_FLOAT_SAMPLES)
       
        /// Choose either 32bit floating point or 16bit integer sampletype
        /// by choosing one of the following defines, unless this selection 
        /// has already been done in some other file.
        ////
        /// Notes:
        /// - In Windows environment, choose the sample format with the
        ///   following defines.
        /// - In GNU environment, the floating point samples are used by 
        ///   default, but integer samples can be chosen by giving the 
        ///   following switch to the configure script:
        ///       ./configure --enable-integer-samples
        ///   However, if you still prefer to select the sample format here 
        ///   also in GNU environment, then please #undef the INTEGER_SAMPLE
        ///   and FLOAT_SAMPLE defines first as in comments above.
        //#define SOUNDTOUCH_INTEGER_SAMPLES     1    //< 16bit integer samples
        #define SOUNDTOUCH_FLOAT_SAMPLES       1    //< 32bit float samples
     
    #endif

    // If defined, allows the SIMD-optimized routines to skip unevenly aligned
    // memory offsets that can cause performance penalty in some SIMD implementations.
    // Causes slight compromise in sound quality.
    // #define SOUNDTOUCH_ALLOW_NONEXACT_SIMD_OPTIMIZATION    1


    #ifdef SOUNDTOUCH_INTEGER_SAMPLES
        // 16bit integer sample type
        typedef short SAMPLETYPE;
        // data type for sample accumulation: Use 32bit integer to prevent overflows
        typedef long  LONG_SAMPLETYPE;

        #ifdef SOUNDTOUCH_FLOAT_SAMPLES
            // check that only one sample type is defined
            #error "conflicting sample types defined"
        #endif // SOUNDTOUCH_FLOAT_SAMPLES

    #else

        // floating point samples
        typedef float  SAMPLETYPE;
        // data type for sample accumulation: Use float also here to enable
        // efficient autovectorization
        typedef float LONG_SAMPLETYPE;

    #endif  // SOUNDTOUCH_INTEGER_SAMPLES

    #if ((SOUNDTOUCH_ALLOW_SSE) || (__SSE__) || (SOUNDTOUCH_USE_NEON))
        #if SOUNDTOUCH_ALLOW_NONEXACT_SIMD_OPTIMIZATION
            #define ST_SIMD_AVOID_UNALIGNED
        #endif
    #endif

}

// define ST_NO_EXCEPTION_HANDLING switch to disable throwing std exceptions:
// #define ST_NO_EXCEPTION_HANDLING    1
#ifdef ST_NO_EXCEPTION_HANDLING
    // Exceptions disabled. Throw asserts instead if enabled.
    #include <assert.h>
    #define ST_THROW_RT_ERROR(x)    {assert((const char *)x);}
#else
    // use c++ standard exceptions
    #include <stdexcept>
    #include <string>
    #define ST_THROW_RT_ERROR(x)    {throw std::runtime_error(x);}
#endif

// When this #define is active, eliminates a clicking sound when the "rate" or "pitch" 
// parameter setting crosses from value <1 to >=1 or vice versa during processing. 
// Default is off as such crossover is untypical case and involves a slight sound 
// quality compromise.
//#define SOUNDTOUCH_PREVENT_CLICK_AT_RATE_CROSSOVER   1

#endif
