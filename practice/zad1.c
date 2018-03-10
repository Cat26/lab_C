#include<stdio.h>
#include<math.h>
double pole(double a,double b,double c){
  double p,pole;
  if((a+b)!=c && (b+c)!=a && (c+a)!=b){
  p=(a+b+c)/2;
  pole=sqrt(p*(p-a)*(p-b)*(p-c));
  return pole;
}
else return -1;
}
int main(){
  double a,b,c;
  printf("podaj bok trójkąta\n");
  scanf("%lf",&a);
  printf("podaj bok trójkąta\n");
  scanf("%lf",&b);
  printf("podaj bok trójkąta\n");
  scanf("%lf",&c);
  printf("pole trójkata= %f\n",pole(a,b,c));
}
