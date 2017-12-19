#include<stdio.h>
#include<stdlib.h>

int main(){
//making variable a
  int a=10;
// pointer b that hold the adress of a
  int *b = &a;
//making another pointer c
  int *c;
//c is holding the value of b , which is adress of a

  c=b;
//making another variable d
  int d=3478;
//c will now hold the adress of d
  c=&d;
  printf("%d\n",*b );

}
void fun(int *x){
  *x=489;
}
void ok(int *p){

}
void go(){
  printf("%s\n","hello" );
}
