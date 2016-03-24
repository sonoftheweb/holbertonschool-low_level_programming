/*converts all chars to uppercase*/
char *uppercase_string(char *p){
  char *b;
  for (b=p;*b!='\0'; b++){
    if (*b>='a' && *b<='z'){
      *b=*b-32;
    }
  }
  return p;
}
