#include<stdio.h>
#include<math.h>
double eksponent(double x){
  double suma=1;
  double skladnik=1;
  double epsilon=1e-10;
  int i=1;
  do{
    skladnik=skladnik*x/i;
    suma=suma+skladnik;
    i++;
    }
    while(fabs(skladnik/suma)>epsilon);
    return suma;
  }
  int main(){
    double x;
    for(x=1;x<=10;x=x+1){
    printf("eksponent(%lf)=%lf,exp%lf,blad względny=%le\n",x,eksponent(x),exp(x),(eksponent(x)-exp(x))/exp(x));

  }
  return 0;
}
