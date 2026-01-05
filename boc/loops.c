#include <stdint.h>
#include <stdio.h>

int main () {
  int32_t x = 0;
  int32_t i;

  for (i = 0; i < 4; i++) {
    x = x + i;
    printf ("%d\n", x);
  }

  while (i < 7) {
    x = x + i;
    i++;
    printf ("%d\n", x);
  }

  do {
    x = x + i;
    i++;
    printf ("%d\n", x);
  } while (i < 9);
}
