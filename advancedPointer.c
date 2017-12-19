
#include<stdio.h>

int main(){
//three pointer
  int *x;
  int **y;
  int ***z;


  int a=10;
//x holding the adress of a
  x=&a;
//y is holding the adress of pointer x
  y=x;
//z is holding the adress of pointer of y
  z=y;

//*x is value of a cz its holds a's adress
//y holdes the adress of x , where in x holdes adress of a
//so y holds the adress of a, so *y is the value of a
//same for the *z
  printf("%d %d %d %d\n",a,*x,*y,*z );

  printf("%p %p %p\n",x,y,z );

//need someone to explaine this ??!!
  char *c[] = {"GeksQuiz", "MCQ", "TEST", "QUIZ"};
  char **cp[] = {c+3, c+2, c+1, c};
  char ***cpp = cp;

//???
     printf("%s ", **++cpp);
     printf("%s ", *--*++cpp+3);
     printf("%s ", *cpp[-2]+3);
     printf("%s ", cpp[-1][-1]+1);

     int *po[3]={1,2,3};
     int **po2[]={c,c+1,c+2};
     int ***po3=po2;

     printf("%d\n",po );


 return 0;
}
