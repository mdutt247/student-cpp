#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int i,j;
    cout<<"Pattern Type 3 BUTTERFLY:\n";

    for(i=1;i<=5;i++)
    {
        cout<<"\n";


        for(j=1; j<=i;j++)
        {
            cout<<j;
        }

          for(j=i; j<5;j++)
        {
            cout<<" ";

        }


      for(int k=i; k<5;k++)
        {
            cout<<" ";

        }

        for(int l=1;l<=i;l++)
        {
            cout<<l;
        }

    }






     for(i=5;i>=1;i--)
    {
        cout<<"\n";
        for(j=1; j<=i;j++)
        {
            cout<<j;
        }

          for(j=i; j<5;j++)
        {
            cout<<" ";

        }


        for(int h=i; h<5;h++)
        {
            cout<<" ";

        }

       for(int m=1; m<=i;m++)
        {
            cout<<m;
        }



    }

cout<<"\n";

    return 0;
}
