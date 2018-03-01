#include<stdio.h>
double iloczynskal(int n, double tablica[],double tab[]){
  int a;
  double suma=0;
  for(a=0;a<n;a++){
      suma =suma+tablica[a]*tab[a];
        }

  return suma;
}
int main(){
  int i,k;
  printf("podaj ile liczb ma miec tablica\n");
  scanf("%d",&k);
  double tablica[k];
  double tab[k];
  for(i=0;i<k;i++){
    printf("podaj liczbe\n");
    scanf("%lf",&tablica[i]);
  }
    for(i=0;i<k;i++){
      printf("podaj liczbe\n");
      scanf("%lf",&tab[i]);
  }
  printf("iloczyn skalarny= %lf\n", iloczynskal(k,tablica,tab));
}
