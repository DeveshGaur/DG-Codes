#include<iostream>
using namespace std;
class sum
{
    int a[5],s=0;
    public:void getdata();
           void display();
};
void sum::getdata()
{
    cout<<"Enter an Array:";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
}
void sum::display()
{
    cout<<"\nSum of Elements:"<<s;
}
int main()
{
    sum n;
    n.getdata();
    n.display();
    return 0;
}
