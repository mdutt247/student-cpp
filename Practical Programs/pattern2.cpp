#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int i,j;
    cout<<"Pattern Type 2:\n";

    for(i=1;i<=5;i++)
    {

        for(j=i; j<5;j++)
        {
            cout<<" ";

        }

        for(int k=1;k<=i;k++)
        {
            cout<<k;
        }

        cout<<"\n";
    }


for(i=5;i>=1;i--)
    {

        for(j=i; j<5;j++)
        {
            cout<<" ";

        }

       for(j=1; j<=i;j++)
        {
            cout<<j;
        }

        cout<<"\n";
    }



    cout<<"\n";
    return 0;
}
