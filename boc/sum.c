#include <stdint.h>
#include <stdio.h>

int main () {
  printf ("\nThis program computes 1 + 2 + ... + n\n");
  printf ("Enter a positive integer value for n: ");

  int32_t n;
  scanf ("%d", &n);

  int32_t sum = 0;
  for (int32_t i = 1; i <= n; i++) {
    sum += i;
  }

  printf ("\nThe sum of 1 + ... + %d is %d\n\n", n, sum);
}
