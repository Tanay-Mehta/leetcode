#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct node{
    int data;
    struct node *link;
}
node;
node *head2 = NULL;
node *head1 = NULL;
node *head3 = NULL;
void insert1(int value){
    node *temp = malloc(sizeof(node));
    temp->data = value;
    temp->link = head1;
    head1 = temp;
}
void insert2(int value){
    node *temp = malloc(sizeof(node));
    temp->data = value;
    temp->link = head2;
    head2 = temp;
}
void insert3(int value){
    node *temp = malloc(sizeof(node));
    temp->data = value;
    temp->link = head3;
    head3 = temp;
}
int add(){
    node *head1_ref = head1;
    node *head2_ref = head2;
    int count1 = 1;
    int count2 = 1;
    int n1 = 0;
    int n2 = 0;
    while(head1_ref!=NULL){
        n1 = n1 + head1_ref->data*count1; 
        count1 = count1 * 10;
        head1_ref = head1_ref->link;
    }
    while(head2_ref!=NULL){
        n2 = n2 + head2_ref->data*count2; 
        count2 *= 10;
        head2_ref = head2_ref->link;
    }
    return n1 + n2;

}
void print3(){
    node *head3_ref = head3;
    while(head3_ref != NULL){
        printf("%i", head3_ref->data);
        head3_ref = head3_ref->link;
    }
}
void main(){
    insert1(5);
    insert1(3);
    insert1(1);
    insert1(6);//list = 6135
    insert2(3);
    insert2(2);
    insert2(1);
    insert2(5);//list = 5123
    int n = add();
    while(n > 0) 
    {
        int mod = n % 10;  
        insert3(mod);
        n = n / 10;  
    }
    print3();
}