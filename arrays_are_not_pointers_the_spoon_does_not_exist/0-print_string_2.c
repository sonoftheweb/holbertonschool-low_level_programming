int print_char(char c);

void print_string_2(char *str) {
  int a;

  for (a=0; str[a] != '\0';) {
    print_char(str[a]);
    a += 2;
  }
}
