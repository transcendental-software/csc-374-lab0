#include <stdlib.h>   // to use malloc, free
#include <stdio.h>    // scanf
#include <stdint.h>   // for int64_t

#define IDX(n, i, j) ((i)*(n)+(j))

int main() {
  uint64_t n;

  printf ("What size matrix do you need? ");
  scanf ("%lu", &n);

  // Dynamically obtain an array of n*n integers
  int64_t* t = (int64_t*) malloc (sizeof (int64_t) * n * n);

  // Put value i+j in row i, column j of t
  for (uint64_t i = 0; i < n; i++)
    for (uint64_t j = 0; j < n; j++)
      t[IDX (n, i, j)] = (int64_t) i + j;

  // Print the value in table t, row by row
  for (uint64_t i = 0; i < n; i++) {
    for (uint64_t j = 0; j < n; j++)
      printf ("%ld ", t[IDX (n, i, j)]);

    printf ("\n");
  }
}
