#include <stdint.h>
#include <stdio.h>

void swap (int32_t x, int32_t y) {
  int32_t temp;

  printf ("x = %d, y = %d before the swap.\n", x, y);

  temp = x;
  x = y;
  y = temp;

  printf ("x = %d, y = %d after the swap.\n", x, y);
}

int main() {
  int32_t a = 0;
  int32_t b = -123;

  printf ("a = %d, b = %d before the swap.\n", a, b);
  swap (a, b);
  printf ("a = %d, b = %d after the swap.\n", a, b);
}
