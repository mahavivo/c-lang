/* numdigit.c (Chapter 6, page 90) */
/* Calculates the number of digits in an integer */

#include <stdio.h>
main()
{
  int digits = 0, n;

  printf("Enter a nonnegative integer: ");
  scanf("%d", &n);

  do {
    n /= 10;
    digits++;
  } while (n > 0);

  printf("The number has %d digit(s).\n", digits);

  return 0;
}
