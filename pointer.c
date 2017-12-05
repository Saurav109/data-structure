#include <stdio.h>
//if i wants to assign value to a pointer , I have to use malloc fuction
//to get malloc functon we need stdlib.h
#include<stdlib.h>


int main(){
//x is a pointer, who can store adress, and *x can give the value of that adress
	int *x;
//a is a normal variable who can store int value
	int a=10;
//assigning a's adress to x pointer,
	x=&a;
// now  *x will give &a 's value , and x will give adress of a
	printf("%d\n",*x );
	printf("%u\n",x );



	int *p;
//if i assign value to pointer I need to allocate memory fot that adress
//spacific size
	p=malloc(sizeof(int));
	*p=920;
//printting the value of *p , means printting
//value of that specific memory loaction
	printf("%d\n",*p );
//freeing memory loaction
	free(p);
// so if i 	print now , i won't get anything cz in that
// location there is nothing now
	printf("%d\n",*p );

//malloc will return random memory loaction everytime
printf("%u\n",malloc(sizeof (int)) );

//
	int ko=(int* ) malloc(sizeof(int));
	int *po=ko;
	*po=34899334893;
	printf("this is %d\n",*p );

}
