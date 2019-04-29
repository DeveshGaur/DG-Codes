#include<stdio.h>
int main()
{
    int a[30],i,j,num,temp;
    printf("Enter the number of elements:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    j=i-1;
    i=0;
    while(i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    printf("After Reversal:");
    for(i=0;i<num;i++)
    {

        printf("%d\t",a[i]);
    }
    return 0;
}
