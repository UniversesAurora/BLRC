#ifndef __BLRC_TYPES_H__
#define __BLRC_TYPES_H__

#include "config.h"


// C standard library exists
#ifdef CSL_SUPPORT

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

#define blrc_uint8 uint8_t

#endif


#endif // __BLRC_TYPES_H__