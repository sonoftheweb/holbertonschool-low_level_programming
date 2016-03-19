int print_char(char c);

int l;
int s;

void print_diagonal(int n){
  if(n<1){
    print_char('\n');
  }

  /* multi dimenssional loop*/
  for(l = 0; l < n; l++){
    if(n>1){
      for(s = l; s > 0; s--){
        print_char(' ');
      }
      print_char('\\');
    }
    print_char('\n');
  }
}
