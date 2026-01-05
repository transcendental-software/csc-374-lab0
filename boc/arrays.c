#include <stdint.h>
#include <stdio.h>

int main () {
  int32_t a[3]; // 12 bytes, split into 3 4-byte ints
  int8_t b[5];  // 5 bytes, split into 5 1-byte chars
  double c[3];  // 24 bytes, split into 3 8-byte doubles

  printf ("&a = %p\t&a[1] = %p\t&a[2] = %p\n\n",
          &a, &a[1], &a[2]);

  for (uint64_t i = 0; i < 5; i++)
    printf ("&b[%ld] = %p\n", i, &b[i]);

  printf ("\n");

  for (uint64_t i = 0; i < 3; i++)
    printf ("&c[%ld] = %p\n", i, &c[i]);
}
