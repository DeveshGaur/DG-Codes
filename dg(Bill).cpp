#include<iostream>
using namespace std;
class shop
{
    public:char item[20];
           int cost;
           int q;
    public:void getdata();
           void putdata();
};
void shop::getdata()
{
    cout<<"Enter name of product:";
    cin>>item;
    cout<<"\nEnter cost of product:";
    cin>>cost;
    cout<<"\nEnter Quantity of product:";
    cin>>q;
}
void shop::putdata()
{
    cout<<"\nName of product:"<<item;
    cout<<"\nCost of product:"<<cost<<"per kg";
    cout<<"\nQuantity of product:"<<q;
    int b,d;
    b=q*cost;
    if(b>5000)
    {
        d=(b*5)/100;
        cout<<"\n5% discount:"<<d;
        b=b-d;

    }
   cout<<"\nTotal bill:"<<b;
}
int main()
{
    shop p;
    p.getdata();
    p.putdata();
}
