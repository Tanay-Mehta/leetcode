#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
}node;

struct node* newNode(int data)
{
  struct node* node = (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
int sum1;
int sum(node *root){
    if (root==NULL){
        return 0;
    }
    else{
        int leftroot = sum(root->left);
        int rightroot = sum(root->right);
        sum1 = leftroot+rightroot+root->data;
    }
}
int main()
{
  struct node *root = newNode(2);
  root->left = newNode(3);
  root->right = newNode(5);
  root->left->left  = newNode(1);
  root->left->right = newNode(4);
  sum(root);
  printf("%i", sum1);
} 