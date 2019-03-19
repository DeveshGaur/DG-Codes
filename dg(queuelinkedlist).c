#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node *next;
}*p=NULL;

void insert(int num)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=num;
    if(p==NULL)
    {
        temp->next=NULL;
        p=temp;
    }
    else
    {
        temp->next=p;
        p=temp;
    }
}

void del()
{
     struct node *r,*r1;
    r=p;
    r1=p->next;
        if(p==NULL)
        {
            printf("\nLinked list is empty");
        }
        else
        {
             if(r->next==NULL)
             {
               p=NULL;
             }
             else
             {
             while(r1->next!=NULL)
             {
                r=r->next;
                r1=r1->next;
             }
             r->next=NULL;
             free(r1);
             }
        }
}
void Display()
{
    struct  node *r;
    r=p;
    if(p==NULL)
    {
        printf("\nLinked List is empty.");
    }
    while(r!=NULL)
    {
        printf("\n%d",r->data);
        r=r->next;
    }
}
void main()
{
    int choice,num,num1;
    while(1)
    {
        printf("\nMenu:-");
        printf("\n1.Insertion");
        printf("\n2.Deletion");
        printf("\n3.Display");
         printf("\nEnter a Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("\nEnter number you want to insert at begining:");
                   scanf("%d",&num);
                   insert(num);
                   printf("\nNumber is inserted at begining");
                   break;
            case 2:del();
                   printf("\nNumber is deleted at end");
                   break;
            case 3:Display();
                   break;
        }
    }

    return 0;
}
