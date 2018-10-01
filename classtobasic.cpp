#include<iostream>
using namespace std;
class time
{
    int hrs,mins;
    public:void getdata()
           {
               cout<<"Enter Hours:";
               cin>>hrs;
               cout<<"Enter Minutes:";
               cin>>mins;
           }
           operator int()
           {
               int m=hrs*60+mins;
           }
};
int main()
{
    time t;
    t.getdata();
    int x;
    x=t;
    cout<<"\nValue in minutes:"<<x;
    return 0;
}
