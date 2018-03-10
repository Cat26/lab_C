#include <stdio.h>
int main(){
  double x;
  double k;
  k=0.5;
  x=-3.5;
  while (x<=7.5){
    printf("%f\n",x);
    x=x+k;
  }
  putchar ('\n');
  k=0.5;
  for(x=-3.5;x<=7.5;x=x+k){
    printf("%f\n",x);

  }
  return 0;
}
