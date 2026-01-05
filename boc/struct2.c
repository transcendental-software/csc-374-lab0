#include <stdint.h>
#include <stdio.h>

typedef struct {
    char* first;
    char* last;
    int32_t age;
} employee;

int main () {
  employee e = {"Sam", "Smith", 55};

  printf ("%s %s, age %d\n", e.first, e.last, e.age);
}
