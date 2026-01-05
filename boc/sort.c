#include <stdint.h>
#include <stdio.h>

void sort (int32_t a[], int32_t n) {      /* insertion sort */
  for (int32_t i = 1; i < n; i++) {
    int32_t tmp = a[i];
    int32_t j = i - 1;

    while ((j >= 0) && tmp < a[j]) {
      a[j + 1] = a[j];
      j--;
    }

    a[j + 1] = tmp;
  }
}

int32_t main () {		/* test program */
  int32_t ar[10] = {3, 4, 7, 0, 9, 8, 1, 6, 5, 2};
  int32_t n = 10;

  printf ("The original array is: ");

  for (int32_t i = 0; i < n; i++)
    printf ("%d ", ar[i]);

  printf ("\n");

  sort (ar, n);

  printf ("The sorted array is: ");

  for (int32_t i = 0; i < n; i++)
    printf ("%d ", ar[i]);

  printf ("\n");
}
