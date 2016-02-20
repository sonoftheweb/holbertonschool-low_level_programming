#include <stdio.h>

void print_combination_2(void) {
  int n1;
  int n2;

  for (n1 = 0; n1 < 8; n1++) {
    for (n2 = n1 + 1; n2 < 10; n2++) {
      printf("%d%d, ", n1, n2);
    }
  }
  printf("89");
}