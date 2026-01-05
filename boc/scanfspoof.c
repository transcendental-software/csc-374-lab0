#include <stdio.h>
#include <stdarg.h>

int scanf (const char* format, ...) {
  va_list ap;
  int read_args = 0;
  char** s, * c;
  int cur_int = 11;
  int* d;

  va_start (ap, format);

  while (*format) {
    if (*format != '%')
      printf ("%c", *format++);
    else {
      format++;

      switch (*format++) {
      case 's':
        s = va_arg (ap, char**);
        *s = "lorem ipsum";
        printf ("%s", *s);
        read_args++;
        break;

      case 'd':
        d = va_arg (ap, int*);
        *d = cur_int++;
        printf ("%d", *d);
        read_args++;
        break;

      case 'c':
        c = va_arg (ap, char*);
        *c = 'z';
        printf ("%c", *c);
        read_args++;
        break;

      case '%':
        printf ("%%");
        break;

      default:
        printf ("ERROR: scanf ARG NOT SPOOFED.\n");
      }
    }
  }

  printf ("\n");
  va_end (ap);

  return read_args;
}
