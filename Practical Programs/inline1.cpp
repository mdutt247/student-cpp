#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
inline int sum(int,int);

int a,b, ans;

cin>>a>>b;

sum(a,b);

ans=sum(a,b);

cout<<"The sum is: "<<ans;

}

int sum(int x, int y)
{
return (x+y);
}
