#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
}*p=Null;
void Addatbeg(int num)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=num;
    if(p==null)
    {
        temp->next=null;
        p=temp;
    }
    else
    {
        temp->next=p;
        p=temp;
    }
}
void Addatend(int num)
{
    struct node *temp,*r;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=num;
    r=p;
    if(p==null)
    {
        temp->next=null;
        p=temp;
    }
    else
    {
        while(r->next!=null)
        {
            r=r->next;
        }
        temp->next=null;
        r->next=temp;
    }
}
struct node * search(int item)
{
    struct node *r;
    r=p;
    while(r!=null)
    {
        if(r->data==item)
        {
            return r;
        }
        r=r->next;
    }
    return Null;
};
void Addafter(int num,int num1)
{
    struct node *temp,*loc;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=num;
    loc=search(num1);
    if(loc==null)
    {
        printf("\nInsertion is not possible.");
        return;
    }
    else if(loc->next==null)
    {
        temp->next=null;
        loc->next=temp;
    }
    else
    {
        temp->next=loc->next;
        loc->next=temp;
    }

}
void main()
{
    int choice,num,num1;
    while(1)
    {
        printf("Menu:-");
        printf("\n1.Insertion at begining");
        printf("\n2.Insertion at End");
        printf("\n3.Insertion after a node");
        printf("\n4.Deletion at begining");
        printf("\n5.Deletion at End");
        printf("\n6.Deletion after a node");
        printf("\n7.Display");
        printf("\nEnter a Choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("\nEnter number you want to insert at begining:");
                   scanf("%d",&num);
                   Addatbeg(num);
            case 2:printf("\nEnter number you want to insert at end:");
                   scanf("%d",&num);
                   Addatend(num);
            case 3:printf("\nEnter number you want to insert:");
                   scanf("%d",&num);
                   printf("\nEnter number after that you want to insert:");
                   scanf("%d",&num1);
                   Addafter(num,num1);
            case 7:Display();
                   break;
        }

    }
}
