#include "my_functions.h"

void print_number(int n) {
  int i = n;
  int p = 1;
  int d = 1;
  
  /*make sure all numbers are absolute*/
  if (n < 0) {
    print_char('-');
    n *= -1;
    i *= -1;
  }

  /* the power */
  while (n > 9) {
    n = n/10;
    p = p*10;
    d = d+1;
  }
  n = i;
  
  for (; d > 0; d--) {
    n = n/p;
    print_char(n + '0');

    n = i % p;
    p = p/10;
  }
}