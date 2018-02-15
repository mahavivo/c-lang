/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, by K. N. King  *
 * Copyright (c) 1996 W. W. Norton & Company, Inc.       *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* nlockoff.c (Chapter 20, page 463) */
/* Turns Num Lock off */

#include <dos.h>

typedef unsigned char BYTE;

main()
{
  BYTE far *p = MK_FP(0x0040, 0x0017);

  *p &= ~0x20;   /* clears Num Lock bit */
  return 0;
}
