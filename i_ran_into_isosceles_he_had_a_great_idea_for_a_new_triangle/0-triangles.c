#include <stdio.h>

void triangles_in_the_term(int h, int n){
  int v,i,a;
  if (h<=0 || n<=0)
    return;
  while(n!=0){ /*First Loop*/
    a=h;
    for (v=1;v<=h;v++){ /*vert*/
      for (i=h-1;i>=v;i--) /*horizontal ' '*/
	printf (" ");
      for (i=h;i<=a;i++) 
	printf ("*");
      printf("\n");
      a=a+2;
    }
    n--;
  }
}