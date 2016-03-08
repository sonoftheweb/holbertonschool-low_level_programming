int str_len(char *str){ /*gets string length*/
  int counter;
  counter=0;
  while(*(str+counter)){
    counter++;
  }
  return counter;
}
