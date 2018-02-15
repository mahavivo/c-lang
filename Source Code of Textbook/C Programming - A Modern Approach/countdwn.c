/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, by K. N. King  *
 * Copyright (c) 1996 W. W. Norton & Company, Inc.       *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* countdwn.c (Chapter 9, page 158) */
/* Prints a countdown */

#include <stdio.h>

void print_count(int n)
{
  printf("T minus %d and counting\n", n);
} 

main()
{
  int i;

  for (i = 10; i > 0; --i)
    print_count(i);
  return 0;
}
