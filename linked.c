
#include<stdio.h>
#include<stdlib.h>


struct Node{

	int data;
	struct Node *next;
};

void pri(struct Node *one);

int main(){
	struct Node *one =(struct Node*)malloc (sizeof(struct Node));
	struct Node *two =(struct Node*)malloc (sizeof(struct Node));
	struct Node *three =(struct Node*)malloc (sizeof(struct Node));

	struct Node *one;
	struct Node *two;
	struct Node *three;
	printf("%s\n","start" );


	one->data=10;
	two->data=20;
	three->data=30;


	one->next=two;
	two->next=three;
	three->next=NULL;

	printf("%s\n","pass" );
	pri(one);

}


void pri(struct Node *one){
		printf("%s\n","entered" );
	while(one !=NULL){
		printf("%d\n",one->data );
		printf("%s\n","doing" );
		one=one->next;

	}
}
