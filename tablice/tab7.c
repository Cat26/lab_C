#include<stdio.h>
#include<string.h>

void odkonca (char napis[]){
  int n =strlen(napis);
  int k;
  char tmp;
  for(k=0;k<n/2;k++){
    tmp =napis[k];
    napis[k]=napis[n-k-1];
    napis[n-k-1]=tmp;
  }
}
  int main(){
    char napis[64];
    printf("podaj napis\n");
    scanf("%s",napis);
    odkonca(napis);
    puts(napis);

}
