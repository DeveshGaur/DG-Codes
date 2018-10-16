#include<iostream>
using namespace std;
class A
{
    public:int x;
    public:void getA()
           {
             cin>>x;
            }
            void setA()
            {
                cout<<"\nx="<<x;
            }
            void show()
            {
                cout<<"\nHello MF";
            }
};
class B:public virtual A
{
    public:int y;
    public:void getB()
           {
               cin>>y;
           }
           void setB()
           {
               cout<<"\ny="<<y;
           }
};
class C:public virtual A
{
    public:int z;
    public:void getC()
           {
               cin>>z;
           }
            void setC()
            {
                cout<<"\nz="<<z;
            }
};
class D:public B,public C
{
    public:int k;
    public:void display()
           {
               k=x+y+z;
               setA();
               setB();
               setC();
               cout<<"\nSUM="<<k;
           }
};
int main()
{
    D d;
    d.getA();
    d.getB();
    d.getC();
    d.display();
    d.show();
}
