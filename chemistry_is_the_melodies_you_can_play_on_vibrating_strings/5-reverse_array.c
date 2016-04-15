void reverse_array(int *a, int n){
  int t,h,o;
  h=n/2;
  n--;
  for(t=0;t<h;t++){
    o=a[t];
    a[t]=a[n-t];
    a[n-t]=o;
  }
}
