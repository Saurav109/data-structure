#include<stdio.h>

struct Node{
  int data;
  struct node *next;
};

int main(){
  struct Node *one =(struct Node*)malloc (sizeof(struct Node));
	struct Node *two =(struct Node*)malloc (sizeof(struct Node));
	struct Node *three =(struct Node*)malloc (sizeof(struct Node));

  one->data=10;
	two->data=20;
	three->data=30;


	one->next=two;
	two->next=three;
	three->next=NULL;

  struct Node *temp;
  temp=one;
  while (temp->next!=NULL) {
    printf("%d\n",temp->data );
    temp=temp->next;
  }

  printf("%s\n\n","" );
  struct Node *four =(struct Node*)malloc (sizeof(struct Node));
  four->data=439;
  four->next=NULL;
  temp=four;
  printf("Adress of %d is %d\n",temp->data, temp);

  struct Node *t;
  t=one;
  while (t!=NULL) {
    printf("value %d adress %d\n",t->data,t->next );
    t=t->next;
  }


 return 0;
}
