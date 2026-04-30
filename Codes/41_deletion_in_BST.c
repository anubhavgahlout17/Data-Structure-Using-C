#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void Inorder(struct node *root){
   if (root != NULL)
   {
        Inorder(root->left);
        printf("%d ",root->data);
        Inorder(root->right);
   }
}

struct node *Predecessor(struct node *root){
    root = root->left;
   while (root->right != NULL)
   {
          root = root->right; 
   }
     return root;
}

struct node *createNode(int data){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node *deletion(struct node *root ,int val){
    struct node *ipre;

    if (root == NULL)
        return NULL;

    if (val < root->data)
    {
        root->left = deletion(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = deletion(root->right, val);
    }
    else
    {
        // Case 1: Leaf
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }

        // Case 2: One child
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }

        if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }

        // Case 3: Two children
        ipre = Predecessor(root);
        root->data = ipre->data;
        root->left = deletion(root->left, ipre->data);
    }

    return root;
}

int main()
{
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
    Inorder(p);
    deletion(p,10);
    printf("\n");
    Inorder(p);

    return 0;
}