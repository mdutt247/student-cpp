#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int p, i, flag=0;
    cout<<"Enter the Number: ";
    cin>>p;

    for(i=2;i<=p-1;i++)
    {
        if(p%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"\nIt is a prime!";
    else
    cout<<"\nIt is not a prime!";

return 0;
}
