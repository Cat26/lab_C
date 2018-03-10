#include <stdio.h>
int main (){
int k;
float l,suma,n;
printf("podaj ile liczb od 1 do 20");
scanf("%f",&n);
for(k=1;k<=n;k++){
printf("Podaj liczbe przecinkowa ");
scanf("%f",&l);
suma+=l;
}
printf("suma =%f , srednia ar=%f",suma,suma/n);
}
