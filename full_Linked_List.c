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


  int in;
  while(1){
    printf("%s\n","1.in \n2.print\n3.bg\n4.del\n5.in in posi\n\n" );
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
      case 4:
      del();
      break;
      case 5:
      posi();
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
  printf("%s\n","element :" );
  while (temp!=NULL) {

    printf("%d ",temp->data );
    temp=temp->next;
  }
  printf("%s\n\n","" );
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
void del(){
  pr();
  int p;
  scanf("%d",&p );
  struct node *temp;
  temp=head;
  int i;
  for(i=2;i<p;i++){
    printf("%d",temp->data );
    temp=temp->next;

  }
  printf("getting the adress of %d\n",temp->data );
  temp->next=temp->next->next;
}

void posi(){

  pr();
  int x;
  printf("%s\n","position" );
  scanf("%d",&x );
  int v;
  printf("%s\n","value" );
  scanf("%d\n", &v);
  struct node *temp;
  struct node *t=(struct node *)malloc(sizeof(struct node));
  t->data=v;
  temp=head;
  int i;
  for(i=2;i<x;i++){
    temp=temp->next;
  }
  t->next=temp->next;
  temp->next=t;
}
