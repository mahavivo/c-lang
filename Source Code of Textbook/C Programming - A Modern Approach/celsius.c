/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, by K. N. King  *
 * Copyright (c) 1996 W. W. Norton & Company, Inc.       *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* celsius.c (Chapter 2, page 22) */
/* Converts a Fahrenheit temperature to Celsius */

#include <stdio.h>

#define FREEZING_PT 32.0
#define SCALE_FACTOR (5.0 / 9.0)

main()
{
  float fahrenheit, celsius;
  printf("Enter Fahrenheit temperature: ");
  scanf("%f", &fahrenheit);
  
  celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
  
  printf("Celsius equivalent: %.1f\n", celsius);

  return 0;
}
