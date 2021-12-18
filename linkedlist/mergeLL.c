#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};


void push(struct node** head, int newdata)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(head == NULL)
    {
        newnode -> data = newdata;
        newnode -> next = NULL;
        *head = newnode;
    }
    else
    {
        newnode -> data = newdata;
        newnode -> next = *head;
        *head = newnode;        
    }
}


void display(struct node** head)
{
    if(*head == NULL)
    {
        printf("Stack Empty\n");
    }
    else
    {
        while(*head != NULL)
        {
            printf("%d ",(*head)->data);
            (*head) = (*head) -> next;
        }
        printf("\n");
    }
}

struct node* mergeLL(struct node** a, struct node** b)
{
    struct node* temp = NULL;
    while((*a)!=NULL && (*b)!=NULL)
    {  
        printf("data a->%d;data b->%d\n",(*a)->data,(*b)->data);
        if((*a)->data<(*b)->data)
        {
            push(&temp,(*a)->data);
            (*a) = (*a) -> next;
        }
        else if((*a)->data>(*b)->data)
        {
            push(&temp,(*b)->data);
            (*b) = (*b) -> next;
        }
        else if((*a)->data==(*b)->data)
        {
            push(&temp,(*a)->data);
            (*a) = (*a) -> next;
            (*b) = (*b) -> next;
        }
    }
    if((*a)==NULL)
    {
        while((*b)!=NULL)
        {
            push(&temp,(*b)->data);
            (*b) = (*b) -> next;
        }        
    }
    if((*b)==NULL)
    {
        while((*a)!=NULL)
        {
            push(&temp,(*a)->data);
            (*a) = (*a) -> next;
        }        
    }
    return temp;
}

int main(int argc, char const *argv[])
{
    struct node* LL1 = NULL;
    struct node* LL2 = NULL;
    struct node* result = NULL;

    push(&LL1, 12);
    push(&LL1, 9);
    push(&LL1, 5);
 
    push(&LL2, 89);
    push(&LL2, 32);
    push(&LL2, 7);

    result = mergeLL(&LL1,&LL2);
    printf("Merged Linked List is: ");
    display(&result);
    return 0;
}
