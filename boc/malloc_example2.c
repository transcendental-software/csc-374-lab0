#include <stdint.h>
#include <stdlib.h>  // to use malloc, free
#include <stdio.h>

typedef uint64_t addr_t;    // memory address type
                            // uintptr_t actually exists!

typedef struct {                // struct type for storing
    int32_t a;                        // an integer and
    addr_t c;                     // a memory address
} entry_t;

typedef entry_t* row_t;         // define row type
typedef row_t* table_t;         // define table type

table_t t;

int main () {
  size_t num_rows = 2;    // size_t is the same as uint64_t
  size_t num_columns = 3;

  table_t t = (row_t*) malloc (sizeof (row_t) * num_rows);

  for (size_t i = 0; i < num_rows; i++) {
    t[i] = (entry_t*) malloc (sizeof (entry_t) * num_columns);

    for (size_t j = 0; j < num_columns; j++) {
      t[i][j].a = i;
      t[i][j].c = j;
    }
  }

  for (size_t i = 0; i < num_rows; i++) {
    for (size_t j = 0; j < num_columns; j++)
      printf ("%d %lu ", t[i][j].a, t[i][j].c);

    printf ("\n");
  }

  for (size_t i = 0; i < num_rows; i++)
    free (t[i]);

  free (t);

  return 0;
}
