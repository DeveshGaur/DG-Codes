#include<iostream>
using namespace std;
class student
{
    public:char name[10];
           int p;
    public:void getdata();
           void putdata();
};
void student::getdata()
{
    cout<<"\nEnter student name:";
    cin>>name;
    cout<<"\nEnter the percentage(%):";
    cin>>p;
}
void student::putdata()
{
    cout<<"\nName of the student:"<<name;
    if (p>=90)
        cout<<"\nGrade of student: A";
    else if(p<90 && p>=70)
        cout<<"\nGrade of student: B";
    else if(p<70 && p>=60)
        cout<<"\nGrade of student: C";
    else if(p<60)
        cout<<"\nGrade of student: D";
}
int main()
{
    student s;
    s.getdata();
    s.putdata();
    return 0;
}
