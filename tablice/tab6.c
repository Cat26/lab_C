#include<stdio.h>
int main(){
  int i;
  char tekst[]="Tablice to podstawa programowania.";
  for(i=sizeof(tekst)/sizeof(char)-2;i>=0;i--){
    printf("%c",tekst[i]);
  }
}
