/* length.c (Chapter 7, page 123) */
/* Determines the length of a message */

#include <stdio.h>

main()
{
  char ch;
  int len = 0;

  printf("Enter a message: ");
  ch = getchar();
  while (ch != '\n') {
    len++;
    ch = getchar();
  }
  printf("Your message was %d character(s) long.\n", len);

  return 0;
}
