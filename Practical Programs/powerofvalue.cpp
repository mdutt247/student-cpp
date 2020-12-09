#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int pow, num, i, ans=1;
    cout<<"Enter Number & Exponent Value:\n";
    cin>>num;
    cin>>pow;

    for(i=1;i<=pow;i++)
    {
       ans=ans*num;
    }

    cout<<"\n"<<num<<"^"<<pow<<"="<<ans;

return 0;
}
