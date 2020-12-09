// write a program to find the area of square , circle and rectangle using function overloading.
#include<iostream>
#include<conio.h>
using namespace std;
class ravi
{
int d,sarea,rarea,carea;

public:
void area(int s)
{


sarea=s*s;
cout<<" the area of square is = "<<sarea;
}
void area(int z, int x)
{


rarea=2*(z*x);
cout<<" the area of rectangle is = "<<rarea;
}
void area(float q)
{


carea=3.14*q*q;
cout<<" the area of circle is = "<<carea;
}

};
int main()
{int a,b,c;
float e;
    cout<<" Enter the length of side \n";
cin>>a;
cout<<" Enter the length rectangle \n";
cin>>b;
cout<<" Enter the breadth rectangle \n";
cin>>c;
cout<<" Enter the radius of circle \n";
cin>>e;
    ravi v;
    v.area(a);
    v.area(b,c);
    v.area(e);
    return 0;
}

