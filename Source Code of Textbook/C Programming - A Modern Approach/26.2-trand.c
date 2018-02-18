/* trand.c (Chapter 26, page 571) */
/* Tests the pseudo-random sequence generation functions */

#include <stdio.h>
#include <stdlib.h>

main()
{
  int i, seed;

  printf("This program displays the first ten values of "
         "rand.\n");

  for (;;) {
    for (i = 0; i < 10; i++)
      printf("%d ", rand());
    printf("\n\n");
    printf("Enter new seed value (0 to terminate): ");
    scanf("%d", &seed);
    if (seed == 0)
      break;
    srand(seed);
  }

  return 0;
}
