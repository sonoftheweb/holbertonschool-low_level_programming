#include <stdio.h>

void print_to_98(int num) {
  if (num < 98) {
    for (; num < 98; num++) {
      printf("%i, ", num);
    }
  }

  if (num > 98) {
    for (; num > 98; num--) {
      printf("%i, ", num);
    }
  }

  if (num == 98) {
    printf("%i", num);
  }

  printf("\n");
}