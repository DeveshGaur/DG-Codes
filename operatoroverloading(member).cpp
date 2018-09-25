#include<iostream>
using namespace std;
class uniary
{
    int x,y;
    public:void getdata(int,int);
           void display();
           void operator -();
           void operator ++();
           void operator --();
};
void uniary::getdata(int a,int b)
{
    x=a;
    y=b;
}
void uniary::display()
{
    cout<<x<<" "<<y<<"\n";
}
void uniary::operator -()
{
    x=-x;
    y=-y;
}
void uniary::operator ++()
{
    x=++x;
    y=++y;
}
void uniary::operator --()
{
    x=--x;
    y=--y;
}
int main()
{
    uniary u;
    u.getdata(10,20);
    u.display();
    -u;
    u.display();
    ++u;
    u.display();
    --u;
    --u;
    u.display();
    return 0;
}
