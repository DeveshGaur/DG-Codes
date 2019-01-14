#include<iostream>
using namespace std;
int main()
{
    int n,i,m,v;
    cout<<"Enter the number of elements:";
    cin>>n;
    int a[n+1];
    cout<<"\nEnter elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"n="<<n;
    cout<<"\nElements:";
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<a[i];
    }
    cout<<"\nEnter a position where user want to add an element:";
    cin>>m;
    cout<<"\nEnter the value to be added:";
    cin>>v;
    for(i=n-1;i>=m-1;i--)
    {
        a[i+1]=a[i];

    }
a[m-1]=v;
    for(i=0;i<(n+1);i++)
    {
        cout<<"\n"<<a[i];
    }

}

