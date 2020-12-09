//Check Prime or Not
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int p,i,flag=0;
    cout<<"Enter a Number: ";
    cin>>p;

    for(i=2;i<=p-1;i++)
    {
        if(p%i==0)
        {
        flag=1;
        break;
        }
    }

    if(flag==1)
    {
        cout<<endl<<"It is not a prime no!"<<endl;
    }
    else
    {
        cout<<endl<<"It is a prime no!"<<endl;
    }

    return 0;
}
