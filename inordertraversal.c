#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}
node;
int* inorderTraversal(struct node* root){
     if(root==NULL){
        return 0;
    }
    inorderTraversal(root->left);
    printf("%i", root->data);
    inorderTraversal(root->right);
     return 0;
}
node *Newnode(int data){
    node *newnode = malloc(sizeof(node));
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->data = data;
    return newnode;
}

void main(void)
{
    node *root = Newnode(1);
    root->right = Newnode(2);
    root->right->left = Newnode(3);
    inorderTraversal(root);
}
