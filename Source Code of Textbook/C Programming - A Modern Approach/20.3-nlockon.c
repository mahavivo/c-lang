/* nlockon.c (Chapter 20, page 463) */
/* Turns Num Lock on */

#include <dos.h>

typedef unsigned char BYTE;

main()
{
  BYTE far *p = MK_FP(0x0040, 0x0017);

  *p |= 0x20;    /* sets Num Lock bit */
  return 0;
}
