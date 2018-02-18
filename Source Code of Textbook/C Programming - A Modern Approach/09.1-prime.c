/* prime.c (Chapter 9, page 162) */
/* Tests whether a number is prime */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;

Bool is_prime(int n)
{
  int divisor;

  if (n <= 1) return FALSE;
  for (divisor = 2; divisor * divisor <= n; divisor++)
    if (n % divisor == 0)
      return FALSE;
  return TRUE;
}

main()
{
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);
  if (is_prime(n))
    printf("Prime\n");
  else
    printf("Not prime\n");

  return 0;
}
