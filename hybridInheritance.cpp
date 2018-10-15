#include<iostream>
using namespace std;
class student
{
    public:int Rollno;
    public:void getroll()
           {
               cout<<"Enter Roll no.:";
               cin>>Rollno;
           }
           void putroll()
           {
             cout<<"\nROLLNO.="<<Rollno;
           }
};
class Marks:public student
{
    public:int m1,m2;
    public:void getm()
           {
               cout<<"\nEnter Marks m1 and m2:";
               cin>>m1>>m2;
           }
           void putm()
           {
               cout<<"\nMarks1 and Marks2:";
               cout<<m1<<" "<<m2;
           }
};
class sports
{
    public:int smarks;
    public:void getsm()
           {
               cout<<"\nEnter marks of sports:";
               cin>>smarks;
           }
           void putsm()
           {
               cout<<"\nSports marks="<<smarks;

           }
};
class Result:public Marks,public sports
{
    public:int total;
    public:void display()
           {
               total=m1+m2+smarks;
               putroll();
               putm();
               putsm();
               cout<<"\nTotal marks="<<total;
           }
};
int main()
{
    Result r;
    r.getroll();
    r.getm();
    r.getsm();
    r.display();
    return 0;
}
