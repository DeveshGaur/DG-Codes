#include<iostream>
using namespace std;
class Rectangle
{
    public: int length;
            int breadth;
    public: void getdata();
            void putdata();
};
void Rectangle::getdata()
{
    cout<<"\nEnter the length of rectangle:";
    cin>>length;
    cout<<"\nEnter the breadth of rectangle:";
    cin>>breadth;
}
void Rectangle::putdata()
{
    int peri=2*(length+breadth);
    int area=length*breadth;
    cout<<"\nPerimeter of Rectangle="<<peri;
    cout<<"\nArea of Rectangle="<<area;
}
int main()
{
    Rectangle r1;
    r1.getdata();
    r1.putdata();
}
