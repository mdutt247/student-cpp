#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c;
    int choose;
    char cont;
do
{
    cout<<"Enter Two Numbers:\n";
    cout<<"Enter Number 1: ";
    cin>>a;
    cout<<"Enter Number 2: ";
    cin>>b;
    cout<<"Choose:\n1.Add\n2.Subtract\n3.Multiply\n4.Division\n";
    cin>>choose;
    switch(choose)
    {
        case 1: {c=a+b;cout<<"\nA+B="<<setprecision(3)<<c;}

        break;

        case 2: {c=a-b;cout<<"\nA-B="<<setprecision(3)<<c;}

        break;

        case 3: {c=a*b;cout<<"\nAxB="<<setprecision(3)<<c;}

        break;

        case 4: {c=a/b;cout<<"\nA/B="<<setprecision(3)<<c;}

        break;

        default: {cout<<"Invalid Input";}
    }

cout<<"\nDo you wish to continue? (Y/N): ";
cin>>cont;
}
while(cont=='Y'||cont=='y');

return 0;
}
