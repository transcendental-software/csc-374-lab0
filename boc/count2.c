#include <stdint.h>
#include <stdio.h>
#include <unistd.h>

int main () { /* counts digits, white space, others */
  uint64_t num_digits[10], num_white = 0, num_other = 0;

  for (uint64_t i = 0; i < 10; i++)		/* initialize */
    num_digits[i] = 0;

  char c;
  while (read (STDIN_FILENO, &c, 1) > 0) {
    switch (c) {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
        num_digits[c - '0']++; // c and '0' are just numbers!
        break;

      case ' ':
      case '\t':
      case '\n':
        num_white++;
        break;

      default:
        num_other++;
        break;
    }
  }

  printf ("digits =");

  for (uint64_t i = 0; i < 10; i++)
    printf (" %lu", num_digits[i]);

  printf (", white space = %lu, other = %lu\n",
          num_white, num_other);
}
