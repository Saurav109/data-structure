#include<stdio.h>
#include<stdlib.h>

int main(){
  char *x;
  char y[10];
  gets(y);
  x=y;
  while(*x!=NULL){
    printf("%c ",*x++ );
  }
}
