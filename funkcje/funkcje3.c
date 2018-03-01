#include<stdio.h>
int funkcja(int a, int n){
  int x=1;
  int i;
  for(i=1;i<=n;i++){
    x=x*a;
  }
  return x;
}
int main(){
  int a,n;
  printf("Podaj a");
  scanf("%d",&a);
  printf("Podaj n");
  scanf("%d",&n);
  printf("\na do potęgi n wynosi: %d",funkcja(a,n));
  return 0;
}
