int factorial(int n){
  int t;
  if (n>12) return -1;
  if (n>=1) t=n*factorial(n-1);
  else if (n==0) return 1;
  else return -1;
  if (t<0) return -1;
  else return t;
}
