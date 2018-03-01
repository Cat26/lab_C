#include <stdio.h>
void liczba (double tablica[], int n,double *min,double *max){
  *min=1.0/0.0;
  *max=-1/0.0;
  int x;
   *max = tablica[0];
   *min = tablica[0];
  for(x=0;x<n;x++){
      if (tablica[x] > *max)
      {
        *max = tablica[x];
      }
          if (tablica[x] < *min)
          {
            *min = tablica[x];
    }
}}
  int main(){
    int i,k;
    double min,max;
    printf("podaj ile liczb ma miec tablica\n");
    scanf("%d",&k);
    double minmax[k];
    for(i=0;i<k;i++){
      printf("podaj liczbe zmiennoprzecinkowa\n");
      scanf("%lf",&minmax[i]);
    }
      liczba(minmax,k,&min,&max);
      printf("maximum =%lf, minimum =%lf",max,min);
  }
