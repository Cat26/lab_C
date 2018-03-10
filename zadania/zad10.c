#include<stdio.h>
 int main(){
  int i, n;
  printf("%5c",' ');
for(i=1;i<=13;i++)
    printf("%4d",i);

  printf("\n    |____________________________________________________");

for(i=1;i<=13;i++){
      printf("\n%3d|",i);

  for(n=1;n<=13;n++){

printf("%4d",i*n);



}}
putchar('\n');
  return 0;

}
