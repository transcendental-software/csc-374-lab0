#include <stdint.h>
#include <stdio.h>

int main () {
  // if we used "int8_t i" here, this would be an infinite loop! Why?
  for (int32_t i = 0; i < 128; i++) 
    printf ("%c:  %d\n", i, i);
}
