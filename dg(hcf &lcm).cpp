#include<iostream>
using namespace std;
class numbers
{
    public:int n1;
           int n2;
    public:void getdata();
           void putdata();
};
void numbers::getdata()
{
    cout<<"\nHCF:-";
    cout<<"\nEnter first number:";
    cin>>n1;
    cout<<"\nEnter second number:";
    cin>>n2;
     int h,i;
    if(n1<=n2)
    {
        for(i=1;i<=n1;i++)
        {
            if(n1%i==0 && n2%i==0)
                h=i;
        }
    }
    else
    {
         for(i=1;i<=n2;i++)
        {
            if(n1%i==0 && n2%i==0)
                h=i;
        }

    }
    cout<<"\nHCF="<<h;
    cout<<"\n\nLCM:-";
    int l,p;
    p=n1*n2;
    cout<<"\np="<<p;
    l=p/h;
    cout<<"\nLCM="<<l;
}
void numbers::putdata()
{

}

int main()
{
    numbers a;
    a.getdata();
    //a.putdata();
}
