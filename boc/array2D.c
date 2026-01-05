#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int64_t A[2][3] = {
  {2, 0, 4},
  {1, 3, 0}
};

int main () {
  int64_t s = A[0][2] + A[1][0];

  printf ("s = %li\n", s);
  A[0][2] = 1;

  for (uint64_t i = 0; i < 2; i++) {
    for (uint64_t j = 0; j < 3; j++) {
      printf ("%li ", A[i][j]);
    }

    printf ("\n");
  }
}
