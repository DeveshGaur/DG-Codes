#include<stdio.h>
#include<conio.h>
int arr[10],n=0,ptr=0,par,item,last=0;
int left,right;

void insert()
{
    printf("\nEnter the element:");
    scanf("%d",&item);
    n=n+1;
    ptr=n;
    while(ptr>1)
    {
        par=ptr/2;
        if(item<=arr[par])
        {
            arr[ptr]=item;
            return;
        }
        arr[ptr]=arr[par];
        ptr=par;
    }
    arr[1]=item;
}

void del()
{
    item=arr[1];
    last=arr[n];
    n=n-1;
    ptr=1;
    left=2;
    right=3;
    while(right<=n)
    {
        if(last>=arr[left]&& last>=arr[right])
        {
            arr[ptr]=last;
            return;
        }
        if(arr[right]<=arr[left])
        {
            arr[ptr]=arr[left];
            ptr=left;
        }
        else
        {
            arr[ptr]=arr[right];
            ptr=right;
        }
        left=2*par;
        right=left+1;
    }
    if(left==n && last<arr[left])
    {
        arr[ptr]=arr[left];
        ptr=left;
    }
    arr[ptr]=last;
    return;
}

void display()
{
    int i;
    printf("\nElements of array are:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
void main()
{
    int choice;
    while(1)
    {
        printf("\n1.Insert");
        printf("\n2.Display");
        printf("\n3.Delete");
        printf("\nEnter Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert();
                   break;
            case 2:display();
                   break;
            case 3:del();
                   break;
        }
    }

}
