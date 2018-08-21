#include<iostream>
using namespace std;
class rectangle
{
    public:int l,b;
    public:void getdata();
           void area();
};
void rectangle::getdata()
{
    cout<<"\nEnter the Length:";
    cin>>l;
    cout<<"\nEnter the breadth:";
    cin>>b;
}
inline void rectangle::area()
{
    cout<<"\nArea of Rectangle="<<l*b<<"\n";
}
int main()
{
    rectangle r1,r2,r3;
    r1.getdata();
    r1.area();
    r2.getdata();
    r2.area();
    r3.getdata();
    r3.area();
    return 0;
}
