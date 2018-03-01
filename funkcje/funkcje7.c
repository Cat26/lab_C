#include<stdio.h>
double potega(double q,int i){
  double p;
  p=1;
  if(i>0){
    if(i%2!=0){
      p=p*q;
      i=i-1;
    }
  q=q*q;
  i=i/2;
   while(i>=1){
        p=p*q;
        i--;
      }
      return p;
}
if (i<0){
  if(i%(2)!=0){
  p=p*q;
  i=i+1;
}
q=q*q;
i=i/2;
while(i<0){
    p=p*q;
    i++;
  }
  return (1/p);
}
else return p;
}
int main(){
  int n;
  double a;
  printf("podaj a\n");
  scanf("%lf",&a);
  printf("podaj n\n");
  scanf("%d",&n);
  printf( "%f do potęgi %d = %f\n",a,n,potega(a,n));
  return 0;
}
