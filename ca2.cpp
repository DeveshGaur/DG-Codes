#include<iostream>
using namespace std;
class XYZ;
class ABC
{
    int n;
    public:void getdata();
           friend void compare(ABC,XYZ);
};
class XYZ
{
    int n;
    public:void getdata();
           friend void compare(ABC,XYZ);
};
void ABC::getdata()
{
    cout<<"Enter number 1:";
    cin>>n;
}
void XYZ::getdata()
{
    cout<<"Enter number 2:";
    cin>>n;
}
void compare(ABC a,XYZ x)
{
    int i,f=1;
    if(a.n>x.n)
    {
        cout<<"\nTable of larger number i.e.,"<<a.n<<":";
        for(i=1;i<=10;i++)
        {
            cout<<"\n"<<a.n<<"*"<<i<<"="<<i*a.n;
        }
        cout<<"\nFactorial of smaller number i.e.,"<<x.n<<":";
        for(i=1;i<=x.n;i++)
        {
            f=f*i;
        }
         cout<<"\nfactorial="<<f;
    }
    else
    {
        cout<<"\nTable of larger number i.e.,"<<x.n<<":";
        for(i=1;i<=10;i++)
        {
            cout<<"\n"<<x.n<<"*"<<i<<"="<<i*x.n;
        }
        cout<<"\nFactorial of smaller number i.e.,"<<a.n<<":";
        for(i=1;i<=a.n;i++)
        {
            f=f*i;
        }
        cout<<"\nfactorial="<<f;
    }
}
int main()
{
    ABC a1;
    XYZ x1;
    a1.getdata();
    x1.getdata();
    compare(a1,x1);
    return 0;
}
