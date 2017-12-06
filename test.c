#include<stdio.h>
#include<stdlib.h>

int main(){
  int a=10;
  int *b = &a;

  int *c;
  c=b;
  int d=3478;
  c=&d;
  printf("%d\n",*b );

}
void fun(int *x){
  *x=489;
}
void ok(int *p){

}
