#include<stdio.h>
int potega(int q,int i){
  int p;
  p=1;
  if(i>0){
    if(i%2!=0){
      p=p*q;
      i=i-1;
    }
  q=q*q;
  i=i/2;
   while(i>=1){
        p=p*q;
        i--;
      }
return p;
}
else return p;
}
int main(){
  int a,n;
  printf("podaj a\n");
  scanf("%d",&a);
  printf("podaj n\n");
  scanf("%d",&n);
  printf( "%d do potęgi %d = %d\n",a,n,potega(a,n));
  return 0;
}
