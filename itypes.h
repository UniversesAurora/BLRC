#ifndef __ITYPES_H__
#define __ITYPES_H__

#include "config.h"


// C standard library exists
#ifdef CSL_SUPPORT

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

// example use
#define uint8_t uint8_t
#define uint16_t uint16_t
#define uint32_t uint32_t
#define uint64_t uint64_t

#define int8_t int8_t
#define int16_t int16_t
#define int32_t int32_t
#define int64_t int64_t

#endif


#endif // __ITYPES_H__