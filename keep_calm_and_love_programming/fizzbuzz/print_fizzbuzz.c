#include "myfuncs.h"

/* print "Fizz" for multiples of 3, Buzz for multiples of 5, "FizzBuzz" for multiples of 3 & 5. The rest are numbers.
*Using % to find multiples
*/

void print_fizzbuzz(void) {
  int num;
  for (num = 1; num < 101; num++) {
      if (num%3 == 0) {
	  printf("Fizz");
	}
      if (num%5 == 0) {
	  printf("Buzz");
	}
      if (num%3 != 0 && num%5 != 0) {
	  printf("%i", num);
	}
      if (num < 100) {
	  printf(" ");
        }
    }
}