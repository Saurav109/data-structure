#include<stdio.h>

int main(){
  int *c[4]={1,2,3,5};
  int **cp[4]={c+0,c+1,c+2,c+3};
  int ***cpp[]=cp;

  printf("%d\n",*++cpp );

 return 0;
}
