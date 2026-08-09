// maybe.h

#pragma once

/* #define _GNU_SOURCE */
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <assert.h>
#include <errno.h>

// u for unsigned
typedef unsigned char u8; // int8
typedef unsigned short int u16; // int16
typedef unsigned int u32; // int32

// s for signed
typedef char s8;
typedef short int s16;
typedef int s32;

/*
  Macros to convert
  (I dont want to use them, but i need them here to read the code later)

  #define $1 (int8 *)
  #define $2 (int16)
  #define $4 (int32)
  #define $i (int)
  #define $c (char *)
  #define $v (void *)
*/

/* #define alloc(x) malloc((u16) (x)) */
/* #define destroy(x) free((x)) */

#define maybe_show_(x) _Generic((x), Maybe*: maybe_show)(#x, (x))

/* #define Nothing false */
/* #define Just true */
const bool Nothing = false;
const bool Just = true;

typedef struct maybe_tag {
    bool has_value;
    void* value;
} Maybe;

Maybe* maybe_new(bool has_value, void* value);
void maybe_show(const char* str, Maybe* maybe);
bool maybe_is_empty(Maybe* maybe);
