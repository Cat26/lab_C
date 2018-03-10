#include<stdio.h>
int funkcja(int n){
  int x,y,z;
  if (n=(x*x)+(y*y)+(z*z))return x,y,z;
  else return printf("nie da sie");

}
int main (){
  int n;
  printf("podaj n");
  scanf("%d",&n);
  printf("%d",funkcja(n));

}
