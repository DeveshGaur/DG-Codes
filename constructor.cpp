#include<iostream>
using namespace std;
class cuboid
{
    int l,b,h;
public:cuboid();
       cuboid(int,int,int);
       cuboid(cuboid &c);
};
cuboid::cuboid()
{
    cout<<"Enter length,breadth and height:";
    cin>>l>>b>>h;
    cout<<"\nVolume of cuboid="<<l*b*h;
    cout<<"\nTotal surface area of cuboid="<<2*((l*b)+(b*h)+(l*h));
}
cuboid::cuboid(int l,int b,int h)
{
    cout<<"\nVolume of cuboid="<<l*b*h;
    cout<<"\nTotal surface area of cuboid="<<2*((l*b)+(b*h)+(l*h));
}
cuboid::cuboid(cuboid &c)
{
    l=c.l;
    b=c.b;
    h=c.h;
    cout<<"\nVolume of cuboid="<<l*b*h;
    cout<<"\nTotal surface area of cuboid="<<2*((l*b)+(b*h)+(l*h));
}
int main()
{
    cuboid r1,r2(10,20,30),r3(r1);
}
