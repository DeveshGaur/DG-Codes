#include<stdio.h>
#include<conio.h>
struct node
{
    int info;
    int priority;
    struct node *link;
}*front=NULL;

int main()
{
    int choice;
    while(1)
    {
        printf("\n1.Insert");
        printf("\n2.Delete");
        printf("\n3.Display");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert();
                   break;
            case 2:del();
                   break;
            case 3:display();
                   break;
            default:printf("\n\nINVAILD CHOICE!!!! TRY AGAIN_______");
        }

    }
}

void insert()
{
    struct node *temp,*q;
    int item,item_priority;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\n\nEnter the element:");
    scanf("%d",&item);
    printf("\nEnter the Priority:");
    scanf("%d",&item_priority);
    temp->info=item;
    temp->priority=item_priority;
    if(front==NULL ||item_priority < front->priority)
    {
        temp->link=front;
        front=temp;
    }
    else
    {
        q=front;
        while(q->link!=NULL && q->link->priority <= item_priority)
        {
            q=q->link;
        }
        temp->link=q->link;
        q->link=temp;
    }
}
void del()
{
    struct node *temp;
    if(front==NULL)
    {
        printf("\n\nQUEUE UNDERFLOW.");
    }
    else
    {
        temp=front;
        printf("Deleted data is %d",temp->info);
        front=front->link;
        free(temp);
    }
}
void display()
{
    struct node *ptr;
    if(front==NULL)
    {
        printf("\n\nQUEUE IS EMPTY\n");
    }
    else
    {
        printf("\n\n----------------------QUEUE----------------------\n\n");
        printf("\nPriority\tData\n\n");
        while(ptr!=NULL)
        {
            printf("%d\t\t%d\n\n",ptr->priority,ptr->info);
            ptr=ptr->link;
        }
    }
}
