#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public:void getdata(int,int);
           void display();
           complex operator +(complex &);
};
void complex::getdata(int a,int b)
{
    real=a;
    img=b;
}
void complex::display()
{
    cout<<"\n"<<real<<"+i"<<img;
}
complex complex::operator +(complex &c)
{
    complex t;
    t.real=real+c.real;
    t.img=img+c.img;
    return t;
}
int main()
{
    complex c1,c2,c3;
    c1.getdata(10,20);
    c2.getdata(40,50);
    c3=c1+c2;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
