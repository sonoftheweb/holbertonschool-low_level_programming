void reverse_string(char *s){ /*reverse the string*/
  char *a;
  char *z;
  a=s;
  while(*a)
    a++;
  for(z=s;a>z;z++){
    char temp;
    a--;
    temp=*a;
    *a=*z;
    *z=temp;
  }
}
