#include<stdio.h>
void pod(int k,int tablica[]){
  int i,x;
  for(x=0;x<k;x++){
    for(i=1;i<=k;i++){
    if (k%i==0)
    i=tablica[i-1];
    }
}

}
  int main(){
    int l;
    int tablica[12];
    printf("podaj liczbe");
    scanf("%d",&l);
    pod(l,tablica);

}
