#include<stdio.h>
int d[10][10];
void init();
int main(){
  int x=0,y=0;

  for(x=0;x<10;x++){
    for(y=0;y<10;y++){
      d[x][y]=0;
    }

  }
  x=0;
  y=0;
  for(x=0;x<10;x++){
    for(y=0;y<10;y++){
      printf("%d ",d[x][y]);
    }
    printf("\n" );
  }
  get();
  clscrn();
 return 0;
}

void init(){
  printf("%s\n","intitialize" );
  int x,y;
  for(x=0;x<50;x++){
    for(y=0;y<50;y++){
      d[x][y]=0;
    }

  }
}
