#include<stdio.h>
#include<math.h>
int main(){
  double a,b,c;
  double delta;
  double x,x1,x2,l;

  printf("Podaj wartość a \n");
  scanf("%lf",&a);
  printf("\nPodaj wartość b \n");
  scanf("%lf",&b);
  printf("\nPodaj wartość c \n");
  scanf("%lf",&c);

  if (a==0){
    if(b==0 && c==0){ printf("x jest dowolna liczbą rzeczywistą\n");}
    if(b==0 && c!=0) {printf("brak rozwiązań\n");}
    if(b!=0 ){x=((-c)/b);printf("\nx=%f\n",x);}

}

  else {
  delta=b*b -(4*a*c);
  l=sqrt(delta);
  if(delta<0){printf("brak pierwiastków rzeczywistych\n");}
  if(delta==0){x=(-b)/(2*a);printf("\nx=%f\n",x);}
  if(delta>0){x1=(-b-l)/(2*a);x2=(-b+l)/(2*a);printf("\nx1=%f, x2=%f\n",x1,x2);}

}}
