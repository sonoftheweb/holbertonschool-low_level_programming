int first_digit(int n){
  int t;
  for (t=0;n!=0;n=n/10)
    t=n; /*to stop loop at first digit in t*/
  if (t<0)
    t=t*(-1);
  return t;
}