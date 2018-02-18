/* reverse.c (Chapter 8, page 142) */
/* Reverses a series of numbers */

#include <stdio.h>

#define N 10

main()
{
  int a[N], i;

  printf("Enter %d numbers: ", N);
  for (i = 0; i < N; i++)
    scanf("%d", &a[i]);

  printf("In reverse order:");
  for (i = N - 1; i >= 0; i--)
    printf(" %d", a[i]);
  printf("\n");

  return 0;
}
