#include<iostream>
using namespace std;
class base
{
    protected:int x,y;
    public:void getdata()
           {
               cout<<"\nEnter the value of x and y:";
               cin>>x>>y;
           }
};
class derived1:public base
{
    public:void cal1()
           {
               int k=x+y;
               cout<<k;
           }
};
class derived2:public base
{
    public:void cal2()
           {
               int k=x*y;
               cout<<k;
           }
};
int main()
{
    derived1 d1;
    d1.getdata();
    d1.cal1();
    derived2 d2;
    d2.getdata();
    d2.cal2();

}
