#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int i,j;
    cout<<"Pattern Type 1:\n";

    for(i=1;i<=5;i++)
    {
        cout<<"\n";
        for(j=1; j<=i;j++)
        {
            cout<<j;
        }
    }

    for(i=5;i>=1;i--)
    {
        cout<<"\n";
        for(j=1; j<=i;j++)
        {
            cout<<j;
        }
    }

    cout<<"\n";
    return 0;
}
