int print_char(char c);

void print_last_digit(int n) {
  int main_n = n;
  int p = 1;
  int top = 999;
  
  if (n < 0) {
    n *= -1;
    main_n *= -1;
  }

  while (top > 9){
      while (n > 9) {
		n = n/10;
		p *= 10;
      }

      top = main_n - n*p;
    }

  print_char(top + '0');
}