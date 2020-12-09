//Compare two strings
// check length for both strings and check equality

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char one[10],two[10];
    int i=1,j=1,k=1,m=1,eq=8;

    cout<<"Enter String 1: ";
    cin>>one;
    cout<<"Enter String 2: ";
    cin>>two;

    while(one[i]!='\0')
    {
        i++;

    }

    while(two[j]!='\0')
    {
        j++;

    }
cout<<endl<<i;
    if(i==j)
    {


    while(k<=i)
    {

    if(one[k]!=two[k])
    {
    eq=0;
    break;
    }
      k++;
     eq=1;
    }

    }

if(eq==1)
{
    cout<<endl<<"Equal";
}
else
{
    cout<<endl<<"Not Equal";
}

    return 0;

}
