#include<iostream>
#include<string.h>
 using namespace std;

 int main()
 {
try{
    int a, b;

    cout<<"Enter the number to be divided: "; cin>>a;
    cout<<"Enter the divisor: "; cin>>b;

    if(b==0)
    {
        throw 2;
    }
    else
    {
        cout<<endl<<a/b;
    }
}

catch(int i)
{
    cout<<"Division By Zero Exception!";
}
return 0;
 }
