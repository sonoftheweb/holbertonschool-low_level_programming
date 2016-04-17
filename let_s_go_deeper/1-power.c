int power(int x, int y){
  int t;
  if(x<0){
    return -1;
  } else if (y==0){
    return 1;
  } else if (y>0){
    t=x*power(x,y-1);
    if(t<x) return -1;
    else return t;
  } else{
    return -1;
  }
}
