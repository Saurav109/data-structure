#include<stdio.h>

int main(){
  int x[100][100];

  int i,j;
  for(i=0;i<100;i++){
    for(j=0;j<100;j++){
      x[i][j]=0;
    }

  }



  for(i=0;i<100;i++){
    for(j=0;j<100;j++){
      printf("%d ",x[i][j] );
    }
    printf("\n" );
  }

 return 0;
}
