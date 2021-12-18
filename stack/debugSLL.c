#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

int delete(struct node* head)
{
    if((head)->next==NULL)
    return 1;
}

int main()
{
    struct node* head = NULL;
    printf("%d popped\n",delete(head));
    return 0;           
}