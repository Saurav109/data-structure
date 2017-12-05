

#include<stdio.h>
#include<stdlib.h>
//global variable
//pointer for stroing address
int *a;
//variable for tracking ammount numbers
int n=0;



//declearing function
void pr();
void inputs(int o);


int main(){
//allocatign  a memory for pointer
  a= malloc (sizeof(int));


  int i,num;
//lop for getting value
  for(i=0;i<5;i++){
    scanf("%d",&num );
    inputs(num);
  }
  printf("%s\n\n","" );
//printing value
  pr();
 return 0;
}


void pr(){
  int z=0;
//looping to get at the end , where (maybe) adress will be NULL
  while(*(a+z)!='\0'){
    printf("%d ",*(a+z) );
    z++;
  }
}

//getting value and assigning
void inputs(int o){

  *(a+n)=o;
  n++;
}
