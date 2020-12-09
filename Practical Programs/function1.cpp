#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int a,b;

int sum(int,int);

cout<<"Enter Two Numbers:\n";

cin>>a;
cin>>b;

sum(a,b); cout<<"\n";
sum(10,20); cout<<"\n";
sum('A','B'); cout<<"\n";

}

int sum(int x, int y)
{
    int z;
    z=x+y;
    cout<<"The Sum is "<<z;
    return z;
}
