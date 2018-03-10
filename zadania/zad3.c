#include <stdio.h>
int main(){
  int i;
  int j;
  printf("Podaj liczbe naturalna wieksza od 1 ");
  scanf("%d", &j);
  for (i=1;i<=j;i++){
  printf("%d podniesona do kwaratu to: %d; podniesiona do ^3 to: %d\n",i,i*i,i*i*i);
}
putchar ('\n');
i=1;
printf ("podaj liczbe naturalna wieksza od 1");
scanf("%d",&j);
while (i<=j){
  printf("%d do kwadratu to:%d; podniesiona do ^3 to: %d\n",i,i*i,i*i*i);
  i++;
}

putchar ('\n');
i=1;
printf("podaj liczbe nat wieksza od 1");
scanf("%d", &j);
do{
  printf("%d do kwadratu to:%d;podniesiona do ^3 to:%d\n",i,i*i,i*i*i);
i++;
}
while(i<=j);}
