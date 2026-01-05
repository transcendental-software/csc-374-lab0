#include <stdint.h>
#include <stdio.h>

struct employee {
    char* first;
    char* last;
    int32_t age;
};

int main () {
  struct employee e = {"Sam", "Smith", 55};

  printf ("%s %s, age %d\n", e.first, e.last, e.age);
}
