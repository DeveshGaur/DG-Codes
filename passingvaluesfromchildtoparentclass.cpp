#include<iostream>
using namespace std;
class A
{
    public:int x;
    public:A(int a)
           {
               x=a;
           }
           void show1()
           {
               cout<<"\nx="<<x;

           }
};
class B:public A
{
    public:int y,z;
    public:B(int a,int b,int c):A(a)
           {
               y=b;
               z=c;
           }
           void show2()
           {
               cout<<"\ny="<<y;
               cout<<"\nz="<<z;
           }
};
int main()
{
    B b1(10,20,30);
    b1.show1();
    b1.show2();
}
