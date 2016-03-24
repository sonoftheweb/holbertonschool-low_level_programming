/*strings to 1337*/
char *leet(char *p){
  char *c;
  for (c=p;*c!='\0'; c++){
    if (*c=='a' || *c=='A')
      *c='4';
    else if ((*c=='e' || *c=='E'))
      *c='3';
    else if ((*c=='o' || *c=='O'))
      *c='0';
    else if ((*c=='t' || *c=='T'))
      *c='7';
    else if ((*c=='l' || *c=='L'))
      *c='1';
  }
  return p;
}
