#include<iostream>
using namespace std;
class time
{
    int hrs,mins;
    public:time(int h,int n)
           {
               hrs=h;
               mins=n;
           }
           int getminutes()
           {
               int tot_mins=hrs*60+mins;
               return tot_mins;
           }
           void display()
           {
               cout<<"\nHours:"<<hrs;
               cout<<"\nMinutes:"<<mins;
           }
};
class minute
{
    int m;
    public:minute()
    {
        m=0;
    }
    void operator =(time t)
    {
        m=t.getminutes();
    }
    void display()
    {
        cout<<"\nMinutes="<<m;
    }
};
int main()
{
    time t1(5,30);
    t1.display();
    minute m1;
    m1.display();
    m1=t1;
    m1.display();
    return 0;
}
