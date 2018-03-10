#include<stdio.h>
int main(){
  int i, c, suma=0;
  for (i=3;i<16;i++){
    c=i*i;/*suma =suma +i*i+c*/
    suma+=c;
    printf("%d*%d=%d\n",i,i,c);
  }
  printf("%d",suma);

putchar('\n');
i=3;
suma=0;
while (i<16)
{
  c=i*i;
  suma+=c;
  printf("%d*%d=%d\n", i,i,c);
  i++;
}
printf("%d",suma);
}
