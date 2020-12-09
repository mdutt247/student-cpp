#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int i,j,num;
    cout<<"Pattern Type 5:\n\n";
    cout<<"Enter Num:";
    cin>>num;

    for(i=num;i>=1;i--)
    {

    for(int k=num; k>=i;k--)
        {

            cout<<" ";
        }

        for(j=1; j<=i;j++)
        {
            cout<<j;
            cout<<" ";
        }

        for(int m=num; m>=i;m--)
        {

            cout<<" ";
        }

         cout<<"\n";
    }

    cout<<"\n";
    return 0;
}
