#include <stdint.h>
#include <stdio.h>

#define LOWER  0     /* lower limit of table */
#define UPPER  300   /* upper limit */
#define STEP   20    /* step size */
#define ftoc(fahr) (5.0/9.0)*((fahr)-32)

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */

int main() {
  for (int32_t fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf ("%3d %6.1f\n", fahr, ftoc (fahr));

  return 0;
}
