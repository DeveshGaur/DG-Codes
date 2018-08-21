#include<iostream>
using namespace std;
class student
{
    int m1,m2,m3;
    public:void getdata();
           void display();
           int average();
};
void student::getdata()
{
    cout<<"Enter marks of 3 subjects of student:";
    cin>>m1>>m2>>m3;
}
int student::average()
{
    int avg=(m1+m2+m3)/3;
    return avg;
}
void student::display()
{
    cout<<"Average="<<average();
}
int main()
{
    student s;
    s.getdata();
    s.display();
    return 0;
}
