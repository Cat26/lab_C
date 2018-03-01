#include<stdio.h>
void transponuj(int n,double tab[n][n]){
  int w,k;double tmp;
  for(w=0;w<n;w++)
  for(k=w+1;k<n;k++){
    tmp=tab[w][k];
    tab[w][k]=tab[k][w];
    tab[k][w]=tmp;

}}
