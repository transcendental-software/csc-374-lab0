#include <stdint.h>
#include <stdio.h>

int main () {
  int64_t x = 0;

  for (int64_t i = 0; i < 5; i++) {
    if (i % 2 == 0)
      continue;

    x = x - i;

    if (i % 4 == 0)
      break;

    printf ("%ld\n", x);
  }
}
