#include<iostream>
using namespace std;
class XYZ;
class ABC
{
    int n;
    public:void getdata();
           friend void greatest(XYZ,ABC);
};
class XYZ
{
    int n;
    public:void getdata();
           friend void greatest(XYZ,ABC);
};
void ABC::getdata()
{
    cout<<"Enter first number:";
    cin>>n;
}

void XYZ::getdata()
{
    cout<<"Enter second number:";
    cin>>n;
}
void greatest(XYZ x,ABC a)
{
   if(x.n>a.n)
    cout<<x.n<<" is greater than "<<a.n;
   else
    cout<<a.n<<" is greater than "<<x.n;
}
int main()
{
    ABC A;
    XYZ B;
    A.getdata();
    B.getdata();
    greatest(B,A);
    return 0;
}
