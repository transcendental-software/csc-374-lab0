#include <stdint.h>
#include <stdio.h>

int main (int argc, char* argv[]) {
  printf ("%d arguments\n", argc);

  // argv[0] is the name of the program, skip it.
  for (int32_t i = 1; i < argc; i++)
    printf (" %d: %s\n", i, argv[i]);
}
