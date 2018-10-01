#include<iostream>
using namespace std;
class space
{
    int x,y,z;
    public:void getdata(int,int,int);
           void display();
           friend void operator -(space &);
};
void space::getdata(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
}
void space::display()
{
    cout<<"\n"<<x<<" "<<y<<" "<<z;
}
void operator -(space &s)
{
    s.x=-s.x;
    s.y=-s.y;
    s.z=-s.z;
}
int main()
{
    space s1;
    s1.getdata(10,20,30);
    s1.display();
    -s1;
    s1.display();
    return 0;
}
