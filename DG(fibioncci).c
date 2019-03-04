#include<stdio.h>
#include<conio.h>
void main()
{
    for(int i=0;i<=5;i++)
    {
        int f=fibo(i);
        printf("%d",f);
    }
}


int fibo(int i)
    {
        if(i==0)
        {
            return 0;
        }
        else if(i==1)
        {
            return 1;
        }
        else
        {
            return fibo(i-1) + fibo(i-2);
        }
    }

