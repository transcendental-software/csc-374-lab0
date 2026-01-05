#include <stdint.h>
#include <stdio.h>

int main () {
  int32_t* iptr;
  int32_t val = 12;
  iptr = &val;

  printf ("val = %d\n", val);
  printf ("sizeof(int32_t) = %ld\n", sizeof (int32_t));
  printf ("iptr     = %p\n", iptr);
  printf ("iptr + 1 = %p\n", iptr + 1);
  printf ("iptr + 2 = %p\n", iptr + 2);

  int8_t* cptr;
  cptr = (int8_t*) &val;

  printf ("cptr     = %p\n", cptr);
  printf ("cptr + 1 = %p\n", cptr + 1);
  printf ("cptr + 2 = %p\n", cptr + 2);
  printf ("cptr + 3 = %p\n", cptr + 3);

  printf ("*iptr     = %x\n", *iptr);
  printf ("*cptr     = %x\n", *cptr);
  printf ("*(cptr+1) = %x\n", * (cptr + 1));
  printf ("*(cptr+2) = %x\n", * (cptr + 2));
  printf ("*(cptr+3) = %x\n", * (cptr + 3));

  return 0;
}
