#include<iostream>
using namespace std;
class time
{
    int hrs,mins;
    public:time()
           {
           }
           time(int m)
           {
               hrs=m/60;
               mins=m%60;
           }
           void display()
           {
               cout<<"hours:"<<hrs;
               cout<<"\nminutes:"<<mins;
           }
};
int main()
{
    time t;
    int x;
    cout<<"Enter the value of time in mins:";
    cin>>x;
    t=x;
    t.display();
    return 0;
}
