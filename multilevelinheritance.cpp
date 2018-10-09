#include<iostream>
using namespace std;
class base
{
    int roll;
    public:void getr()
           {
               cout<<"Enter roll no.=";
               cin>>roll;
           }
           void putr()
           {
               cout<<"\nRoll no.="<<roll;
           }
};
class derived1:public base
{
    protected:int num1,num2;
    public:void getm()
           {
               cout<<"Enter marks of subject1 and subject2:";
               cin>>num1>>num2;
           }
           void putm()
           {
               cout<<"\nMarks of subject1="<<num1;
               cout<<"\nMarks of subject2="<<num2;
           }
};
class derived2:public derived1
{
    int total;
    public:void totalm()
           {
               total=num1+num2;
               putr();
               putm();
               cout<<"\nTotal marks="<<total;
           }
};
int main()
{
    derived2 d;
    d.getr();
    d.getm();
    d.totalm();
    return 0;
}
