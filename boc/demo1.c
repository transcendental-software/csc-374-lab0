#include <stdint.h> // standard ints: int32_t here
#include <stdlib.h> // scanf
#include <stdio.h>  // printf

int main () {
  int32_t x;
  int32_t y = 34;

  printf ("Please enter an integer: ");
  scanf ("%d", &x);  /* &x: memory address of variable x */
  printf ("x: %d  y: %d\n", x, y);

  return 0;
}
