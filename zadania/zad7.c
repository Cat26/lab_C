#include<stdio.h>
int main(){
  char x;
  printf("znak\t kod dziesietny\t kod szesnastkowy\n");
  for(x='a'; x<='k'; x++){
    printf("%c\t %d\t\t\t %x\n", x, x, x);
  }
  putchar('\n');
  for (x='k';x>='a';x--){
    printf("%c\t %d\t\t\t %x\n",x,x,x);
  }return 0;
}
