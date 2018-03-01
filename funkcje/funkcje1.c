#include<stdio.h>
#include<math.h>
  double pole(double r){
  return 4*r*r*M_PI;
}
  int main(){
    double r;
  printf("Podaj promień");
  scanf("%lf",&r);
  printf("Pole kuli wynosi %lf\n",pole(r));
  return 0;
}
