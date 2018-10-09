#include<iostream>
using namespace std;
class base
{
    int a;
    public:int b;
           void getab()
           {
               cout<<"Enter the value of a:";
               cin>>a;
               cout<<"\nEnter the value of b:";
               cin>>b;
           }
           int showa()
           {
               return a;
           }
           void showab()
           {
               cout<<"\na="<<a;
               cout<<"\nb="<<b;
           }
};
class derived:private base
{
    int c;
    public:void cal()
           {
               getab();
               c=b*showa();
           }
           void show()
           {
               showab();
               cout<<"\na="<<showa();
               cout<<"\nb="<<b;
               cout<<"\nc="<<c;
           }
};
int main()
{
    derived d;
    d.cal();
    d.show();
}
