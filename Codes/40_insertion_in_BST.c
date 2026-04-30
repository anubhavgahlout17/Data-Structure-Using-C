#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int key)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = key;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void insertion(struct node *root,int key){
    struct node *prv = NULL;
    while (root != NULL)
    {
        prv = root;
        if (key == root->data)
        {
            printf("Cannot Insert %d\n",key);
            return;
        }

        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
   
    struct node *newNode = createNode(key);
     if (key < prv->data)
     {
        prv->left = newNode;
     }
     else
     {
        prv->right = newNode;
     }
}

int main()
{
    struct node *p = createNode(15);
    struct node *p1 = createNode(7);
    struct node *p2 = createNode(20);
    struct node *p3 = createNode(5);
    struct node *p4 = createNode(8);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = NULL;
    p2->right = NULL;

    insertion(p,16);
    printf("%d Inserted\n",p->right->left->data);

    return 0;
}
