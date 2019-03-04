#include<stdio.h>
#include<conio.h>
void main()
{
    int n,f;
    printf("Enter the value of n:");
    scanf("%d",&n);
    f=sum(n);
    printf("%d",f);
}
int sum(int f)
{
    if(f==0)
    {
        return 0;
    }
    else if(f==1)
    {
        return 1;
    }
    else
    {
        return f+sum(f-1);
    }
}
