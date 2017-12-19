#include<stdio.h>
struct one {
  int data;
  int data2;
};

typedef struct two {
  int data;
  int data2;
  struct two *next;
}shortcut ;



int main(){
    struct one x;
    x.data=209;
    x.data2=384;
    printf("%d %d \n",x.data,x.data2 );


    shortcut b;
    b.data=40;
    b.data2=7438;

    printf("%d %d\n", b.data,b.data2);

    shortcut c;
    shortcut d;
    c.next=&d;
    d.data2=100;

    printf("%d \n",c. );


 return 0;
}
