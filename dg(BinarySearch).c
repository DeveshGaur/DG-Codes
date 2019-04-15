#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,search1,f=0,low,high,mid,a[20];
    printf("Enter the number of element:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter the number in ascending order a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&search1);
    low=1;
    high=n;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(search1<a[mid])
        {
            high=mid-1;
        }
        else if(search1>a[mid])
        {
            low=mid+1;
        }
        else
        {
            f=1;
            printf("Element found at position %d",mid);
            break;
        }
    }
    if(f==0)
    {
        printf("Element not found.");
    }
}
