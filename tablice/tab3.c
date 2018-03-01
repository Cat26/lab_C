#include<stdio.h>
#include<ctype.h>
#include<string.h>
void duza(char napis[]){
  int n =strlen(napis);
  int k;
  char c;
  for(k=0;k<n;k++){
    c=napis[k];
    //if(c>95){
      napis[k]=napis[c-32];
      napis[c-32]=c;
    //}
  }



}
int main(){
  char napis[64];
  printf("podaj tekst\n");
  scanf("%s",napis);
  duza(napis);
  puts (napis);
}
