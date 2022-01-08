#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

void insertEnd(struct node** head, int num)
{
    
}

int main()
{
    struct node* head = NULL;
    int x, choice = 1;
    
    printf("\n/Stack using Linked List/\n");
    
    while(choice)
    {
        printf("1-push 2-delete 3-display 0-exit\nchoice - ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 0:
            break;
        case 1:
            printf("num - ");
            scanf("%d",&x);
            insertEnd(&head, x);
            break;
        case 2:
            x = deleteEnd(&head);
            printf("%d deleted\n",x);
            break;
        case 3: 
            display(head);
            break;
        default:
            break;
        }
    }
    return 0;
}