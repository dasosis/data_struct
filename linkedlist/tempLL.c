#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* push(struct node* head, int newdata)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(head == NULL)
    {
        newnode -> data = newdata;
        newnode -> next = NULL;
        head = newnode;
        return head;
    }
    else
    {
        newnode -> data = newdata;
        newnode -> next = head;
        head = newnode;
        return head;        
    }
}
void display(struct node* head)
{
    if(head == NULL)
    {
        printf("Stack Empty\n");
        //return 0;
    }
    else
    {
        while(head != NULL)
        {
            printf("%d ",head->data);
            head = head -> next;
        }
        printf("\n");
        //return 1;
    }
    //return 0;
}
int pop(struct node** head)
{
    struct node* temp = *head;
    int x;
    if(temp == NULL)
    {
        printf("Stack Empty\n");
        return 0;
    }
    else
    {
        x = temp -> data;
        (*head) = temp -> next;
        free(temp);
        return x;
    }
}

int DeQ(struct node** head)
{
    struct node* temp = *head;
    struct node* prev;
    int x;
    if(temp == NULL)
    {
        printf("Stack Empty\n");
        return 0;
    }
    else
    {
        while (temp->next!=NULL)
        {
            prev = temp;
            temp = temp -> next;
        }
        x = temp -> data;
        prev -> next = NULL;
        free(temp);
        return x;
    }
}
int main()
{
    struct node* head = NULL;
    int choice=1,x; 
    printf("/Stack Implementation using Linked List/\n");
    while(choice != 0)
    {
        printf("1-Push 2-Pop 3-Peek 4-Dequeue 5-Display 0-Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0:
                break;
            case 1: 
                printf("Enter Number ");
                scanf("%d",&x);
                head = push(head,x);
                break;
            case 2: 
                pop(&head);    
                break;
            /*case 3: 
                printf("Element on top is %d",peek(&head));
                break;*/
            case 4: 
                DeQ(&head);
                break;
            case 5: 
                display(head);
                break;
            default:
                printf("Invalid Input");
                break;
        }
    }   
}

