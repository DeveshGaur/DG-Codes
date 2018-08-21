#include<iostream>
using namespace std;
class PQR;
class XYZ
{
    int m1;
    public:void getdata();
           friend void display(XYZ,PQR);
};
class PQR
{
    int m1;
    public:void getdata();
           friend void display(XYZ,PQR);
};
void XYZ::getdata()
{
    cout<<"Enter a number:";
    cin>>m1;
}
void PQR::getdata()
{
    cout<<"Enter a number:";
    cin>>m1;
}
void display(XYZ x,PQR p)
{
    cout<<"Average="<<(x.m1+p.m1)/2;
}
int main()
{
    XYZ x1;
    PQR p1;
    x1.getdata();
    p1.getdata();
    display(x1,p1);
    return 0;
}
