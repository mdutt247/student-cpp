//Compare two strings
//Check length for both strings and check equality

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char one[10],two[10];
    int i=1,j=1,k=1,eq=777;

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

    if(i>j)
    {
        cout<<endl<<"1: String 1 is greater than String 2";
        cout<<endl<<"Length of String 1: "<<i;
        cout<<endl<<"Length of String 2: "<<j<<endl;
    }
    else if(i<j)
    {
        cout<<endl<<"-1: String 1 is lesser than String 2";
        cout<<endl<<"Length of String 1: "<<i;
        cout<<endl<<"Length of String 2: "<<j<<endl;
    }
    else if(i==j)
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

        if(eq==1)
        {
        cout<<endl<<"0: String 1 is equal to String 2"<<endl;
        }

        else
        {
        cout<<endl<<"0: String 1 is not equal to String 2, both having Same Length"<<endl;
        }
    }

    return 0;

}
