#include <stdint.h>
#include <stdio.h>

int main () {
  int32_t val = 12345;
  float a = 3.14;
  int32_t* valp;
  float* ap;

  printf ("val = %d\n", val);
  printf ("a = %3.2f\n", a);
  printf ("&val = %p\n", &val);
  printf ("&a = %p\n", &a);

  valp = &val;
  ap = &a;
  printf ("valp = %p\n", valp);
  printf ("ap = %p\n", ap);
}
