#include<iostream>
using namespace std;
class A
{
    protected:int a,b;
    public:void getdata()
          {
            cout<<"Enter value of a and b:";
            cin>>a>>b;
          }
          void display()
          {
              cout<<"\na="<<a;
              cout<<"\nb="<<b;
          }
};
class B:public A
{
    protected:int c,d;
    public:void get1()
           {
               cout<<"\nEnter value of c:";
               cin>>c;
               d=a+b+c;
           }
           void display()
           {
               cout<<"\nSUM="<<d;
           }
};
int main()
{
    B k;
    k.getdata();
    k.get1();
    k.display();
}
