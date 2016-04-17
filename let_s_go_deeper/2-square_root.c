int cal(int n, int m);

int square_root(int n){
  if (n == 1) return 1;
  else if (n == 0) return 0;
  else if (n < 0) return -1;
  return cal(n, n - 1);
}

int cal(int n, int r){
  if (r * r == n) return r;
  else if (r < 1) return -1;
  return cal(n, r - 1);
}
