#include<iostream>
using namespace std;
class XYZ;
class ABC
{
    int a[5],i;
    public:void getdata();
           friend void array(ABC,XYZ);
};
class XYZ
{
    int a[5],i;
    public:void getdata();
           friend void array(ABC,XYZ);
};
void ABC::getdata()
{
    cout<<"Enter first array:";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
}
void XYZ::getdata()
{
    cout<<"Enter second array:";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
}
void array(ABC A,XYZ X)
{
    int b[5],i;
    for(i=0;i<5;i++)
    {
        b[i]=A.a[i]+X.a[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<b[i]<<"\n";
    }
}
int main()
{
    ABC i;
    XYZ j;
    i.getdata();
    j.getdata();
    cout<<"New Array:-\n";
    array(i,j);
    return 0;
}
