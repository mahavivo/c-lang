/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, by K. N. King  *
 * Copyright (c) 1996 W. W. Norton & Company, Inc.       *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* stocks.c (Chapter 3, page 40) */
/* Computes the value of stock holdings */

#include <stdio.h>

main()
{
  int price, shares;
  float num, denom, value;

  printf("Enter share price (must include a fraction): ");
  scanf("%d%f/%f", &price, &num, &denom);
  printf("Enter number of shares: ");
  scanf("%d", &shares);

  value = (price + num / denom) * shares;

  printf("Value of holdings: $%.2f\n", value);
  return 0;
}
