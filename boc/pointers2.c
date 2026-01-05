#include <stdint.h>
#include <stdio.h>

void set (int32_t p) {
  p = -123;
}

int main() {
  int32_t val = 0;
  printf ("val = %d before calling set.\n", val);
  set (val);
  printf ("val = %d after calling set\n", val);
  return 0;
}
