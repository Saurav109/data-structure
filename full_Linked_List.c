#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head;


void ins();
void pr();
int main(){
  head=NULL;

  printf("%s\n","1.in \n2.print\n3.bg\n" );
  int in;
  while(1){
    scanf("%d",&in );
    switch (in) {
      case 1:
      ins();
      break;
      case 2:
      pr();
      break;
      case 3:
      bg();
      break;
    }
  }

}
void ins(){
  struct node *n=(struct node *)malloc(sizeof(struct node));
  n->next=NULL;
  int data;
  scanf("%d",&data );
  n->data=data;
  if(head==NULL)
  {head=n;}
  else{
    printf("%s\n","in the else" );
    struct node *temp;
    temp=head;
    while(temp->next!=NULL){
      temp=temp->next;
    }
    temp->next=n;

  }

}
void pr(){
  struct node *temp;
  temp=head;
  printf("%s\n","in the print" );
  while (temp!=NULL) {

    printf("%d ",temp->data );
    temp=temp->next;
  }
}
void bg(){
  if(head!=NULL){
  struct node *n=(struct node *)malloc(sizeof(struct node));
  n->next=NULL;
  int data;
  scanf("%d",&data );
  n->data=data;

  n->next=head;

  head=n;
}
else{
  ins();
}


}
