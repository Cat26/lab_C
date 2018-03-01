#include<stdio.h>
int podzielna(int tab[],int n){
  int i;
  for(i=n-1;i>=0;i--){
    if (tab[i]%7==0){
    return tab[i];
  }
  return -99;
}
int main(){
  int i,k;
  printf("podaj ile liczb ma miec tablica\n");
  scanf("%d",&k);
  int tab[k];
  for(i=0;i<k;i++){
    printf("podaj liczbe zmiennoprzecinkowa\n");
    scanf("%d",&tab[i]);
  }
    printf("%d",podzielna(tab,n));
}
