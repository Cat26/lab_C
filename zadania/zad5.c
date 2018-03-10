#include<stdio.h>
#include<math.h>

int main (){

  double x,k;


  for(k=0;k<=180;k+=30){
      x = (k*M_PI)/180;//liczba PI//

    printf("%3f stopni\t; sin= %6.3lf\t; cos= %6.3lf\n", k, sin(x), cos(x));


  }
  return 0;
}//bez standardu, -lm na końcu//
