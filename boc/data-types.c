#include <stdint.h>
#include <stdio.h>

int main () {
  int32_t x, y; // 32-bit signed integers
  uint64_t z;  // unsigned int of 64 bits
  char a; // same as int8_t
  float	f, e;
  double d;

  x = 4;
  y = 7;
  z = -1;  // Works, but z is unsigned!
  a = 'H';
  f = -3.4;
  d = 54.123456789;
  e = 54.123456789;

  printf ("%d %c\n", x, a);
  printf ("%3d %5c\n", y, a);
  printf ("%lu\n", z);
  printf ("%f %e\n", e, d);
  printf ("%.9f %.9e\n", e, d);
  printf ("%20.9f %20.9e\n", e, f);
}
