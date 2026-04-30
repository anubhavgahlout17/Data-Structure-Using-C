#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data){
    struct node *newNOde = (struct node *)malloc(sizeof(struct node));
    newNOde->data = data;
    newNOde->left = NULL;
    newNOde->right = NULL;

    return newNOde;
}

int main(){

    struct node *p = createNode(2);
    struct node *p1 = createNode(4);
    struct node *p2 = createNode(6);

    p->left = p1;
    p->right = p2;


    return 0;
}
