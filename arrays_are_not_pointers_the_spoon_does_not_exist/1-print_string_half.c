#include <stdio.h>
int print_char(char c);

void print_string_half(char *str) {
  int length = 0;
  int a;
  int start;

  for (a = 0; str[a] != '\0'; a++) {
    length += 1;
  }

  start = length/2 + 1;
  if (length % 2 == 1) {
    start = (length - 1)/2 + 1;
  }

  for (a = start; a != length; a++) {
    print_char(str[a]);
  }
}
