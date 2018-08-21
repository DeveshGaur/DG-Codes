#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"\nOperations:-\n1.Additon\n2.Subtraction\n3.Multiplication\n4.Divison";
    cout<<"\nEnter your choice:";
    cin>>c;
    switch(c)
    {
        case 1:cout<<"\nAdditon="<<a+b;
               break;
        case 2:cout<<"\nSubtraction="<<a-b;
               break;
        case 3:cout<<"\nMultiplication="<<a*b;
               break;
        case 4:cout<<"\nDivison="<<a/b;
               break;
        default:
            cout<<"Invalid Choice";
    }
}
