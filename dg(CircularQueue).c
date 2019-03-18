#include<stdio.h>
#include<conio.h>

int queue[10],front=0,rear=0,n=5,item;
int main()
{
    int choice;
    while(1)
    {
        printf("\nMenu:-");
        printf("\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.Traverse");
        printf("\nEnter Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("\nEnter the element:");
                   scanf("%d",&item);
                   enqueue(item);
                   break;

            case 2:dequeue();
                    break;
            case 3:traverse();
                   break;
            default:printf("\nWrong Choice.");
        }
    }
}

void enqueue(int item)
{
    if((front==1&&rear==n)||(front==rear+1))
    {
        printf("\nOVERFLOW");
        return;
    }
    if(front==0)
    {
        front=1;
        rear=1;
    }
    else if(rear==n)
    {
        rear=1;
    }
    else
    {
        rear=rear+1;
    }
    queue[rear]=item;
    return;

}


void dequeue()
{
    if(front==0)
    {
        printf("\nUNDERFLOW");
        return;
    }
    item=queue[front];
    printf("\n%d is deleted:",item);
    if(front==rear)
    {
        front=0;
        rear=0;
    }
    else if(front==n)
    {
        front=1;
    }
    else
    {
        front=front+1;
    }
    return;
}

void traverse()
{
    int i;
    if(front<=rear)
    {
        for(i=front;i<=rear;i++)
        {
            printf("\n%d",queue[i]);
        }
    }
    else
    {
        for(i=front;i<=n;i++)
        {
            printf("\n%d",queue[i]);
        }
        for(i=1;i<=rear;i++)
        {
           printf("\n%d",queue[i]);
        }
    }
}
