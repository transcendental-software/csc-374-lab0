#include <stdint.h>
#include <stdio.h>
#include <unistd.h>

int main () {		/* counts digits, white space, others */
  uint64_t num_digits[10], num_white = 0, num_other = 0;

  for (uint64_t i = 0; i < 10; i++)		/* initialize */
    num_digits[i] = 0;

  char c;
  while (read (STDIN_FILENO, &c, 1) > 0) {
    if (c >= '0' && c <= '9')
      ++num_digits[c - '0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++num_white;
    else
      ++num_other;
  }

  printf ("digits =");

  for (uint64_t i = 0; i < 10; i++)
    printf (" %lu", num_digits[i]);

  printf (", white space = %lu, other = %lu\n",
          num_white, num_other);
}
