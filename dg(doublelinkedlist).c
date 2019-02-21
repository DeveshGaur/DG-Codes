#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL,*tail=NULL;


void AddBeg(int num)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=num;
    if(head==NULL && tail==NULL)
    {
        temp->prev=NULL;
        temp->next=NULL;
        head=temp;
        tail=temp;
    }
    else
    {
        temp->prev=NULL;
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}

void AddEnd(int num)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=num;
    if(head==NULL && tail==NULL)
    {
        temp->prev=NULL;
        temp->next=NULL;
        head=temp;
        tail=temp;
    }
    else
    {
        temp->next=NULL;
        temp->prev=tail;
        tail->next=temp;
        tail=temp;
    }
}
struct node *search(int item)
{
    struct node *r;
    r=head;
    while(r!=NULL)
    {
        if(r->data==item)
        {
            return r;
        }
        r=r->next;
    }
    return NULL;
};

void AddAfter(int num,int num1)
{
    struct node *temp,*loc;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=num;
    loc=search(num1);
    if(loc==NULL)
    {
        printf("Insertion not possible.");
        return;
    }
    else if(loc->next==NULL)
    {
        temp->next=NULL;
        temp->prev=loc;
        loc->next=temp;
        tail=temp;
    }
    else
    {
        temp->next=loc->next;
        temp->prev=loc;
        loc->next->prev=temp;
        loc->next=temp;


    }
}


void DelBeg()
{
    struct node *r;
    r=head;
    if(head==NULL && tail==NULL)
    {
        printf("Linked list is empty.");
        return;
    }
    else if(head->next==NULL)
    {
        head=NULL;
        tail=NULL;
        free(r);
    }
    else
    {
        head->next->prev=NULL;
        head=head->next;
        free(r);
    }
}

void DelEnd()
{
    struct node *r;
    r=head;
    if(head==NULL && tail==NULL)
    {
        printf("Linked List is Empty.");
        return;
    }
    else if(head->next=NULL)
    {
        head=NULL;
        tail=NULL;
        free(r);
    }
    else
    {
        r=tail;
        tail->prev->next=NULL;
        tail=tail->prev;
        free(r);
    }
}
void DelAfter(int num)
{
    struct node *r,*loc;
    loc=search(num);
    if(loc==NULL)
    {
        printf("Deletion not possible.");
        return;
    }
    else if(loc->next==NULL)
    {
        printf("Deletion not possible.");
        return;
    }
    else
    {
        r=loc->next;
        if(r->next==NULL)
        {
            loc->next=NULL;
            tail=loc;
        }
        else
        {
            loc->next=r->next;
            r->next->prev=loc;
        }
        free(r);
    }
}

void Display()
{
    struct node *r;
    r=head;
    if(head==NULL && tail==NULL)
    {
        printf("\nLinked list is empty.");
        return;
    }
    else
    {
        while(r!=NULL)
        {
            printf("\n%d",r->data);
            r=r->next;
        }
    }
}
int main()
{
    int choice,num,num1;
    while(1)
    {
    printf("\nMenu:-");
    printf("\n1.Insertion at Beginning.");
    printf("\n2.Insertion at End");
    printf("\n3.Insertion after a node");
    printf("\n4.Deletion at Beginning");
    printf("\n5.Deletion at End");
    printf("\n6.Deletion after a node");
    printf("\n7.Display");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("\nEnter a number you want to insert at beginning:");
               scanf("%d",&num);
               AddBeg(num);
               break;
        case 2:printf("\nEnter a number you want to insert at end:");
               scanf("%d",&num);
               AddEnd(num);
               break;
        case 3:printf("\nEnter a number you want to insert:");
               scanf("%d",&num);
               printf("\nEnter the number after which you want to insert:");
               scanf("%d",&num1);
               AddAfter(num,num1);
               break;
        case 4:DelBeg();
               break;
        case 5:DelEnd();
               break;
        case 6:printf("\nEnter the number after which you want to delete:");
               scanf("%d",&num);
               DelAfter(num);
               break;
        case 7:Display();
    }
    }

}
