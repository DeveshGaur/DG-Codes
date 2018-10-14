#include<iostream>
using namespace std;
class Base1
{
    public:int a;
              void getdata1(int x)
              {
                  a=x;
              }
};
class Base2
{
    public:int b;
              void getdata2(int x)
              {
                  b=x;
              }
};
class derived:public Base1,public Base2
{
    public:void display()
           {
              cout<<"\n"<<a;
              cout<<"\n"<<b;
              cout<<"\n"<<a*b;

           }
};
int main()
{
    derived d;
    d.getdata1(10);
    d.getdata2(20);
    d.display();

}
