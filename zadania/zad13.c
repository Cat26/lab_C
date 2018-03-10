#include <stdio.h>
int main(){
  int a,b,c,d=1;


  for(c=1;;c++){
    for(a=1;a<c;a++){
      for(b=1;b<c;b++){

        if  ((a*a)+(b*b)==c*c && d<=20){

          printf("%d,%d,%d,%d\n",a,b,c,(a*a)+(b*b));
          d++;
        }
      }
    }}}
