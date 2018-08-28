#include<iostream>
using namespace std;
class reverse
{
    int a[5];
    public:void getdata();
           void display();
};
void reverse::getdata()
{
    cout<<"Enter an Array:";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
}
void reverse::display()
{
    cout<<"\nReverse array:";
    for(int i=4;i>0;i--)
    {
        cout<<"\n"<<a[i];
    }
}
int main()
{
    reverse m;
    m.getdata();
    m.display();
    return 0;
}
