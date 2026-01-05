#include <stdint.h>
#include <stdio.h>

/* power: raise base to n-th power; n >= 0 */
int32_t power (int32_t base, int32_t n) {
  int32_t p = 1;

  for (int32_t i = 1; i <= n; ++i)
    p = p * base;

  return p;
}

/* test power function */
int main () {
  for (int32_t i = 0; i < 10; ++i)
    printf ("%d %4d %6d\n", i, power (2, i), power (-3, i));
}
