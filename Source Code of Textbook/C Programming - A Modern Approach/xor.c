/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, by K. N. King  *
 * Copyright (c) 1996 W. W. Norton & Company, Inc.       *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* xor.c (Chapter 20, page 457) */
/* Performs XOR encryption */

#include <ctype.h>
#include <stdio.h>

#define KEY '&'

main()
{
  int orig_char, new_char;

  while ((orig_char = getchar()) != EOF) {
    new_char = orig_char ^ KEY;
    if (iscntrl(orig_char) || iscntrl(new_char))
      putchar(orig_char);
    else
      putchar(new_char);
  }

  return 0;
}
