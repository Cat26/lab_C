#include<stdio.h>
#include<ctype.h>
int main(){
  int c;
    while ((c=getchar())!=/*'x'*/EOF){
    putchar(toupper(c));
}
return 0;
}
