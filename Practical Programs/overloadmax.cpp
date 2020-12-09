#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
int max(int, int);
int max(int, int, int);


int a,b,c, ans;

cin>>a>>b>>c;

ans=max(a,b,c);
cout<<"The Greatest with 3 No.s is: "<<ans;

ans=max(a,b);
cout<<"\nThe Greatest with 2 No.s is: "<<ans;

}

int max(int x, int y, int z)
{
    if(x>y && x>z)
    {
        return x;
    }
    else if(y>x && y>z)
    {
        return y;
    }
    else
    {
        return z;
    }

}

int max(int x, int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
