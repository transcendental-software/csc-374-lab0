#include <stdint.h>
#include <stdlib.h>  // to use malloc, free
#include <stdio.h>

int main() {
  uint64_t i;
  int32_t* array = (int32_t*) malloc (10 * sizeof (int32_t));

  for (i = 0; i < 10; i++)
    array[i] = 5 * i;

  for (i = 0; i < 10; i++)
    printf ("array[%ld] = %d\n", i, array[i]);

  free (array);
}
