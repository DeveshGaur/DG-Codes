#include<iostream>
using namespace std;
class rectangle
{
    int l,b;
    public:void getdata(int,int);
           void area();
           void operator +();
};
void rectangle::getdata(int a,int c)
{
    l=a;
    b=c;
}
void rectangle::area()
{
    cout<<"Area of Rectangle:"<<l*b;
}
void rectangle::operator +()
{
    l=l+5;
    b=b+5;
}
int main()
{
    rectangle r;
    r.getdata(10,20);
    +r;
    r.area();
    return 0;
}
