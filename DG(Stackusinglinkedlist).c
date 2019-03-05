#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
}*top=NULL;

void push(int n)
{
    struct node* temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=n;
    if(top==NULL)
    {
        temp->next=NULL;
        top=temp;
    }
    else
    {
        temp->next=top;
        top=temp;
    }
}
void pop()
{
    struct node *r;
    r=top;
    if(top==NULL)
    {
        printf("\nStack is empty.");
    }
    else
    {
        top=r->next;
        free(r);
    }
}

void display()
{
     struct node *r;
    r=top;
    if(top==NULL)
    {
        printf("\nStack is empty.");
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
    int ch,n;
    while(1)
    {
        printf("\nMenu:-");
        printf("\n1.PUSH");
        printf("\n2.POP");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\nEnter the element you want to insert:");
                   scanf("%d",&n);
                   push(n);
                   break;
            case 2:pop();
                   break;
            case 3:display();
                   break;
            case 4:exit(1);
        }
    }
}
