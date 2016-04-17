int is_prime(int,int);

int is_prime_number(int n){
  if (n<2)
    return 0;
  return is_prime(n,n/2);
}

int is_prime(int numb,int i){
  if(i==1){
    return 1;
  }
  else{
    if(numb%i==0)
      return 0;
    else
      return is_prime(numb,i-1);
  }
}
