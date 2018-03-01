#include<stdio.h>
int wartbez(int l){
  if (l>=0) return l;
  else return (-l);
}
int main(){
  int l;
  printf("Podaj liczbe całkowita\n");
  scanf("%d",&l);
  printf("wartość bezwzgledna liczby = %d\n",wartbez(l));
  return 0;

}
