#include<stdio.h>
#include<stdlib.h>

int main(){
  int a=malloc(sizeof(int));
  int *b=a;
  *b=327838;
  printf("%d\n",*b );

}
