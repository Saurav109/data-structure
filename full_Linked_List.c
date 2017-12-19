#include<stdio.h>
#include<stdlib.h>


struct list{
  int data;
  struct list *next;
};

void pr(struct list *node);
void adds(int x, struct list *node);
int main(){
  struct list *node =(struct list *)malloc(sizeof(struct list ));


  int in=1;
  int x;
  while(in!=3){
    scanf("%d", &in);
    switch(in){
      case 1:
      scanf("%d",&x );
      adds(x,node);
      break;

      case 2:
      pr(node);
      break;

      case 3:
      in=3;
      break;

      default:
      printf("%s\n","error" );
      break;
    }

  }


}
void adds(int x, struct list *node){
  // printf("%s\n","adding" );
  // struct list *n =(struct list *)malloc(sizeof(struct list ));
  // node->next=n;
  // n->data=x;
  struct list *temp=node;
  struct list *n =(struct list *)malloc(sizeof(struct list ));
  n->data=x;
  while(temp!=NULL){
    temp=temp->next;
  }
  temp->data=x;
}

void pr(struct list *node){
  printf("%s\n","printing" );
  while (node != NULL)
  {
     printf(" %d ", node->data);
     node = node->next;
  }
}
