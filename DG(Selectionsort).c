#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],i,j,k,loc,min,n,temp;
    printf("Enter the length of array:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(k=1;k<=n-1;k++)
    {
        min=a[k];
        loc=k;
        for(j=k+1;j<=n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;
            }
        }
        temp=a[k];
        a[k]=a[loc];
        a[loc]=temp;
    }
    printf("The sorted array:");
        for(i=1;i<=n;i++)
        {
            printf("%d\t",a[i]);
        }
    return 0;

}
