#include<stdio.h>

int main(){

  int x=10;
  go(&x);
  printf("%d\n",x );
 return 0;
}

void go(int *a) {
  *a=40;
  *(a+1)=59;
  //this will work but its illigal way of creating variable
  printf("printng other value %d\n",*(a+1) );
  int x;
}
