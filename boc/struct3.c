#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* first;
    char* last;
    int32_t age;
} employee;

int main () {

  employee* eptr;
  eptr = (employee*) malloc (12);
  (*eptr).first = "Sam";
  (*eptr).last = "Smith";
  (*eptr).age = 55;

  // alternative notation
  eptr->first = "Sam";
  eptr->last = "Smith";
  eptr->age = 55;

  printf ("%s %s, age %d\n",
          (*eptr).first, (*eptr).last, (*eptr).age);

  // alternative notation
  printf ("%s %s, age %d\n",
          eptr->first, eptr->last, eptr->age);
}
