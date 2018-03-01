#include<stdio.h>
double srednia(double tablica[],int n){
  int x;
  double suma=0;
  for(x=0;x<n;x++){
    suma = suma + tablica[x];
  }
  return suma/n;
}
int main(){
int i,n;

printf("podaj ile liczb ma miec tablica\n");
scanf("%d",&n);
double liczby[n];
for(i=0;i<n;i++){
  printf("podaj liczbe zmiennoprzecinkowa\n");
  scanf("%lf",&liczby[i]);
}
printf("srednia z liczb  = %f",srednia(liczby,n));
}
