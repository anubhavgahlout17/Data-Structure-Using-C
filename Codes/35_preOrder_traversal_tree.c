#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left =NULL;
    newNode->right = NULL;
    return newNode;
}

void preOrder(struct node *root){
    if (root != NULL)
    {
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
    
}
int main(){
    struct node *p = createNode(1);
    struct node *p1 = createNode(2);
    struct node *p2 = createNode(3);
    struct node *p3 = createNode(4);
    struct node *p4 = createNode(5);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

   preOrder(p);


    return 0;
}
