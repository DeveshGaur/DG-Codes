#include<stdio.h>
#include<conio.h>
#define MAX 5
int top=-1;
int stack_arr[MAX];

main()
{
    int choice;
    while(1)
    {
        printf("\nOperation on stack:-");
        printf("\nPUSH");
        printf("\nPOP");
        printf("\nDisplay");
        printf("\nQuit");
        printf("\nEnter your Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:Push();
                   break;
            case 2:Pop();
                   break;
            case 3:Display();
                   break;
            case 4:exit(1);
            default:printf("wrong choice");
        }
    }
}

Push()
{
    int pushed_item;
    if(top==(MAX-1))
    {
        printf("\nStack Overflow");
    }
    else
    {
        printf("\nEnter the number to be Pushed:");
        scanf("%d",&pushed_item);
        top=top+1;
        stack_arr[top]=pushed_item;
    }
}

Pop()
{
    if(top==-1)
    {
        printf("stack underflow");

    }
    else
    {
        printf("\nPopped element is:%d\n",stack_arr[top]);
        top=top-1;
    }
}
Display()
{
    int i;
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("\nStack elements:-");
        for(i=top;i>=0;i--)
        {
            printf("\n%d",stack_arr[i]);
        }
    }
}
