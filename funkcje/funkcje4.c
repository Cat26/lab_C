#include<stdio.h>
#include<math.h>
double pierwiastek(double a){
double  x=1, epsilon= 1e-12;
  while(fabs (x-a/x)>epsilon*x)
  x=(x+a/x)/2;
return x;
}
int main (){
double x;
for(x=1e-5;x<=1e5;x=x+10){
  printf("pierw(%le)=%lf,sqrt%lf,blad wzgledny=%le\n",x,pierwiastek(x),sqrt(x),(pierwiastek(x)-sqrt(x))/sqrt(x));

}
return 0;
}
