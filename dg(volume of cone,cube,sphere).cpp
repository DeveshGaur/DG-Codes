#include<iostream>
using namespace std;
class volume
{
    int x,y;
};
inline float cubevol(int x)
{
    return(x*x*x);
}
inline float conevol(int x,int y)
{
    return(3.14*x*x*y)/3;
}
inline float spherevol(int x)
{
    return(4*3.14*x*x*x)/3;
}
int main()
{
    int r,h;
    cout<<"Enter value of 'r':";
    cin>>r;
    cout<<"Enter value of 'h':";
    cin>>h;
    cout<<"\nVolume of cube:"<<cubevol(r);
    cout<<"\nVolume of cone:"<<conevol(r,h);
    cout<<"\nVolume of sphere:"<<spherevol(r);
    return 0;
}
