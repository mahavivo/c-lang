/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, by K. N. King  *
 * Copyright (c) 1996 W. W. Norton & Company, Inc.       *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* repdigit.c (Chapter 8, page 143) */
/* Checks numbers for repeated digits */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;


main()
{
  Bool digit_seen[10] = {0};
  int digit;
  long int n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    if (digit_seen[digit])
      break;
    digit_seen[digit] = TRUE;
    n /= 10;
  }

  if (n > 0)
    printf("Repeated digit\n\n");
  else
    printf("No repeated digit\n\n");

  return 0;
}
