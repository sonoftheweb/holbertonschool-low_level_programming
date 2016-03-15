int print_char(char c);
void print_number(int input);
void handle_remaining(int n_remaining, int power);

void print_array(int *a, int n) {
  int i;

  for (i = 0; i < n; i ++) {
    print_number(a[i]);

    if (i == n - 1) {
      print_char('\n');
      return;
    }

    print_char(',');
    print_char(' ');
  }
}


void print_number(int input) {
  int number = input;
  int power = 1;
  int n_remaining = 0;

  /* negative cases? */
  if (input < 0) {
    print_char('-');
    input *= -1;
    number *= -1;
  }

  /* reduce the number to first digit and find the remainder */
  while (number > 9) {
    power *= 10;
    number /= 10;
  }
  n_remaining = input - number*power;

  print_char(number + 48);
  handle_remaining(n_remaining, power);
}

void handle_remaining(int n_remaining, int power) {
  if (n_remaining * 10 < power && power > 1) {
    print_char('0');
  }

  if (n_remaining > 0) {
    print_number(n_remaining);
  }
}
