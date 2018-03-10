#include<stdio.h>
#include<math.h>
int main(){
  int n,i;
  double x, suma=0;
  printf("Podaj ile liczb: ");
  scanf("%d",&n);
  for (i=0;i<n;i++)
  {printf("Podaj liczbe zmiennoprzecinkowa:");
  scanf("%lf",&x);
  suma+=x;
}
printf("suma podanych liczb wynosi:%lf\n",suma);
printf("srednia podanych liczb wynosi:%lf\n",suma/n);

return 0;


}
