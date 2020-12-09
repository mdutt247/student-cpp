#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
inline int cube(int);

int a, ans;

cin>>a;

cube(a);

ans=cube(a);

cout<<"The Cube is: "<<ans;

}

int cube(int x)
{
return (x*x*x);
}
