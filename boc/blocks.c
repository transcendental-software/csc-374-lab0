#include <stdint.h>
#include <stdio.h>

int main () {
  for (int32_t i = 0; i < 5; i++) {
    if (i == 0)
      printf ("%d is 0.\n", i);
    else if (i % 2 == 0) {
      printf ("%d is even.\n", i);
    } else {
      printf ("%d is odd.\n", i);
    }
  }
}
