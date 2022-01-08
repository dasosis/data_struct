//DISCONTINUED

struct node
{
    int data;
    struct node *left, *right;
};

struct node* create()
{
    struct node *temp;
    int choice,data;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("press 0 to exit and 1 to continue...\n");
    scanf("%d",&choice);
    if(choice == 0)
        return;
    else
    {
        scanf("%d",&data);
        temp->data = data;

    }

}

int main(int argc, char const *argv[])
{
    struct node *root;
    root = create();
    return 0;
}
