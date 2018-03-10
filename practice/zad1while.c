#include<stdio.h>
int main(){
  int i=0;
  while (i<24){
    printf("%d ",i);
    i++;
  }
  putchar('\n');
  i=0;
  do{
    printf("%d ",i);
    i++;
  }while (i<24);
  putchar ('\n');
}
