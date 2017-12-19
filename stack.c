#include<stdio.h>
void push();
void pop();
void position();


int x[10]={1,2,3,4,5,6,7,8,9,0};
int s=10;
int main(){

  printf("%s\n", "1.push\n2.pop\n3.posotion\n");
  int n;
  scanf("%d",&n );

  switch (n) {
    case 1:
    push();
    break;
    case 2:
    pop();
    break;
    case 3:
    position();
    break;
    default:
    printf("%s\n","error" );
    break;
  }
show();

 return 0;
}
void push(){
  int n;
  scanf("%d",&n );
  int i=0;
  for(i=0;i<s;i++){
    x[i]=x[i+1];
  }
  x[s]=n;
}
void pop(){


}
void position(){

}
void show(){
  int i=0;
  for(i=0;i<s;i++){
   printf("%d ",x[i] );
  }
}
