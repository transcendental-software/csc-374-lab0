#include <stdint.h>
#include <stdlib.h>   // to use malloc, free
#include <stdio.h>

typedef int* row_t;       // define row type
typedef row_t* table_t;   // define table type

int main () {
  uint64_t num_rows = 2;
  uint64_t num_columns = 3;

  // allocate space for holding num_rows row references
  // t will refer to this spaces
  table_t t = (table_t) malloc (sizeof (row_t) * num_rows);

  for (uint64_t i = 0; i < num_rows; i++)
    // for every row allocate space for num_columns integers
    t[i] = (int*) malloc (sizeof (int) * num_columns);

  // Fill table t with zeros
  for (uint64_t i = 0; i < num_rows; i++)
    for (uint64_t j = 0; j < num_columns; j++)
      t[i][j] = 0;

  // Print the value in table t, row by row
  for (uint64_t i = 0; i < num_rows; i++) {
    for (uint64_t j = 0; j < num_columns; j++)
      printf ("%d ", t[i][j]);

    printf ("\n");
  }

  // free the dynammically allocated space before terminating
  for (uint64_t i = 0; i < num_rows; i++)
    free (t[i]);

  free (t);
}
