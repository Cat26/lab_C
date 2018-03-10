#include<stdio.h>

int main(){
  int x;
  int k;
  int sumadziel=0;
  for(x=1;x<100000;x++){
       for(k=1;k<x;k++){
           if(x%k==0){
             sumadziel+=k;
        }//koniec if
      }//koniec wewn for
       if(sumadziel==x){
          printf("liczby doskonale :%d \n",x);
}
sumadziel=0;
}
return 0;
}
