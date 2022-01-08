#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};


void searchBST(struct node *root, int key)
{
    if(root==NULL)
    {
        printf("item not in tree");
        return;
    }
    if(root->data == key)
    {
        printf("item is present");
        return;
    }
    if(key < root->data)
        searchBST(root->left, key);
    else
        searchBST(root->right, key);
}

void insertBST(struct node **root, int val)
{
    if(*root == NULL)
    {
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        newnode -> data = val;
        newnode -> right = NULL;
        newnode -> left = NULL;
        *root = newnode;
        return;
    }
    if(val == (*root)->data)
    {
        printf("ERR: duplicate element"); 
        return;
    }
    if(val < (*root)->data)
        insertBST(&((*root) -> left),val);
    else
        insertBST(&((*root) ->right),val);
    return;
}


int main(int argc, char const *argv[])
{
    struct node *root = NULL;
    insertBST(&root,54);
    insertBST(&root,4);
    insertBST(&root,44);
    insertBST(&root,34);
    insertBST(&root,14);
    insertBST(&root,84);
    searchBST(root,84);
    return 0;
}

