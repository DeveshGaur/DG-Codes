#include<iostream>
using namespace std;
class array
{
    int a[5],l,s,i;
    public:void getdata();
           void display();
};
void array::getdata()
{
    cout<<"Enter an array:";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    l=a[0];
    for(i=1;i<5;i++)
    {
        if(l<a[i])
            l=a[i];
    }
    s=a[0];
    for(i=1;i<5;i++)
    {
        if(s>a[i])
            s=a[i];
    }
}
void array::display()
{
    cout<<"\nLargest element of array:"<<l;
    cout<<"\nSmallest element of array:"<<s;
}
int main()
{
    array n;
    n.getdata();
    n.display();
    return 0;
}
