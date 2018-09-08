#include<iostream>
using namespace std;
class student
{
    int m1,m2,m3,p;
    public:void getdata();
           int percentage();
           void display();
};
void student::getdata()
{
    cout<<"\nEnter marks of subject1:";
    cin>>m1;
    cout<<"\nEnter marks of subject2:";
    cin>>m2;
    cout<<"\nEnter marks of subject3:";
    cin>>m3;
}
int student::percentage()
{
    p=((m1+m2+m3)*3)/100;
}
void student::display()
{
    cout<<"\nMarks of student with highest percentage:";
    cout<<"\nSubject1="<<m1;
    cout<<"\nSubject2="<<m2;
    cout<<"\nSubject3="<<m3;
}
int main()
{
    student s[5];
    int i,h=0;
    for(i=1;i<=5;i++)
    {
        cout<<"\nEnter marks of student "<<i<<":-";
        s[i].getdata();
    }
    h=0;
    for(i=1;i<5;i++)
    {
        if(s[h].percentage()<s[i].percentage())
        {
            h=i;
        }
    }
    s[h].display();
    return 0;
}
