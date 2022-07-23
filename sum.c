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
int sum(node *root){
    if (root==NULL){
        return 0;
    }
    else{
        int data = root->data;
        int leftroot = sum(root->left);
        int rightroot = sum(root->right);
        if(leftroot>data){
          data = leftroot;
        }
        if(rightroot>data){
          data = rightroot;
        }
        return data;
    }
}
int main()
{
  struct node *root = newNode(10);
  root->left = newNode(8);
  root->right = newNode(0);
  root->left->left  = newNode(59);
  root->left->right = newNode(9);
  printf("%i", sum(root));
} 