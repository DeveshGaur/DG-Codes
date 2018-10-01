#include<iostream>
using namespace std;
class dgstar
{
    int real,imag;
    public:void getdata(int,int);
           void display();
          friend dgstar operator +(dgstar &,dgstar &);
};
void dgstar::getdata(int a,int b)
{
    real=a;
    imag=b;
}
void dgstar::display()
{
    cout<<"\n"<<real<<"+i"<<imag;
}
dgstar operator +(dgstar &c,dgstar &d)
{
    dgstar t;
    t.real=c.real+d.real;
    t.imag=c.imag+d.imag;
    return t;
}
int main()
{
    dgstar d1,d2,d3,d4;
    d1.getdata(10,20);
    d2.getdata(40,50);
    d3=d1+d2;
    d1.display();
    d2.display();
    d3.display();
    return 0;
}
