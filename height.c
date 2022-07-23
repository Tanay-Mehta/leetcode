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
int height(node *root){
    if (root==NULL){
        return -1;
    }
    else{
        int leftroot = height(root->left);
        int rightroot = height(root->right);
        if (leftroot > rightroot)
            return (leftroot + 1);
        else
            return (rightroot + 1);
    }
}
int main()
{
  struct node *root = newNode(2);
  root->left = newNode(3);
  root->right = newNode(5);
  root->left->left  = newNode(1);
  root->left->right = newNode(4);

  printf("%i", height(root));
} 