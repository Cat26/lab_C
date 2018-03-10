#include <stdio.h>
#define znak '*'


main() {

  int lbwier;
  int lw;
  int lodst;
  int j;

  printf ("ile wierszy?");
  scanf ("%d", &lbwier);

   for (lw=0 ; lw <lbwier ; lw++)
   {
     //lodst =lbwier - lw -1 ;
     //for(j=0 ; j<lodst ; j++) putchar (' ');
     for(j=0 ;j<2*lw +1 ;j++) putchar (znak);
     putchar ('\n');
   }

}
