/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, by K. N. King  *
 * Copyright (c) 1996 W. W. Norton & Company, Inc.       *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* canopen.c (Chapter 22, page 482) */
/* Checks whether a file can be opened for reading */

#include <stdio.h>

main(int argc, char *argv[])
{
  FILE *fp;
  if (argc != 2) {
    printf("usage: canopen filename\n");
    return 2;
  }

  if ((fp = fopen(argv[1], "r")) == NULL) {
    printf("%s can't be opened\n", argv[1]);
    return 1;
  }
 
  printf("%s can be opened\n", argv[1]);
  fclose(fp);
  return 0;
}
