#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void InOrder(struct node *root){
    if (root != NULL)
    {
        InOrder(root->left);
        printf("%d ",root->data);
         InOrder(root->right);
    }
    
}

struct node *createNode(int data){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node *search(struct node *root,int key){

    
    while (root != NULL)
    {
        if (key == root->data)
        {
            return root;
        }
        else if (key  < root->data)
        {
            root = root->left;
        }
       else
       {
        root = root->right;
       }
    }
return NULL;    
   
}

int main(){

    struct node *p = createNode(9);
    struct node *p1 = createNode(7);
    struct node *p2 = createNode(10);
    struct node *p3 = createNode(5);
    struct node *p4 = createNode(8);
    struct node *p5 = createNode(15);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = NULL;
    p2->right = p5;
    InOrder(p);


    struct node *n = search(p,9);
    if (n != NULL)
    {

        printf("\nFound: %d\n",n->data);
    }
    else
    {
        printf("\nNot Found\n");
    }
    
    return 0;
}