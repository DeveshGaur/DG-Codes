#include<stdio.h>
#include<conio.h>
void main()
{
    int f=fact(6);
    printf("%d",f);
}
int fact(int f)
{
    if(f==0)
    {
        return 1;
    }
    else if(f==1)
    {
        return 1;
    }
    else
    {
        return f*fact(f-1);
    }
}
