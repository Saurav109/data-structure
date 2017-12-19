#include<stdio.h> 

typedef struct tree{
  int data;
  struct tree *left;
  struct tree *right;
}node;

int main(){
  node root;
  node one;
  node two;

  root->left=one;
  root->right=two;

  one.data=3892;
  two.data=4673;
  root.data=7;

 return 0;
}
