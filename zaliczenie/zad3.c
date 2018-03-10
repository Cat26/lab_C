#include<stdio.h>
void pod(int k,int tablica[]){
  int i,x;
  for(x=0;x<k;x++){
    for(i=1;x<=k;x++){
    if (k%i==0)
    tablica[x]=i;
  }}
}
  int main(){
    int l;
    int tablica[64];
    printf("podaj liczbe");
    scanf("%d",&l);
    pod(l,tablica);
    printf("%d",tablica);

}
