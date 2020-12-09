#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,n, n1, n2=0;

    cin>>n;

    n1=n;

    while(n!=0)
    {
        a=n%10;
        n2=n2*10+a;
        //cout<<a;
        n=n/10;cout<<"\n"<<n2;
    }


    return 0;
}
