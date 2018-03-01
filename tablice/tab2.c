#include<stdio.h>

int liczba (int tablica[], int n,int l){
  int x;
  for(x=0;x<n;x++){
    if (l==tablica[x])return 1;
  }
  return 0;
}
int main(){
  int l,k;
  int dane[7]={-44,5,67,-2,0,33,77};
  printf ("podaj liczbe\n");
  scanf ("%d",&l);
  k= liczba(dane,7,l);
  if (k==1){printf("liczba %d należy do tablicy\n",l);}
  else {printf("liczba %d nie należy do tablicy\n",l);}

}
