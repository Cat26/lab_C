#include <stdio.h>
int main() {
  double fahr, celsius;
  int lower=0, upper=300, step=20;
  for(fahr=0; fahr<=upper;fahr= fahr+step)
  printf("%.0lf %5.1lf\n",fahr,(5.0/9.0)*(fahr-32));
  return 0;
}
