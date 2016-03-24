/*capitalize first letter*/
char *cap_string(char *p){
  char *b;
  for (b=p;*b!='\0'; b++){
    if (*b>='a' && *b<='z'){
      *b=*b-32;
      for (;*b>' ';b++);
    }
    else
      for (;*b>' ';b++)
	if (*b=='\0')
	  return p;
  }
  return p;
}
