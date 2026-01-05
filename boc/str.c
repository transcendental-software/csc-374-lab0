#include <stdint.h>
#include <stdio.h>

int main () {
  char s[10] = "hello";
  int32_t i = -1; // signed!

  do {
    i += 1;
    printf ("%c\t%x\n", s[i], s[i]);
  } while (s[i] != '\0');
}
