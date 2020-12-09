//Concatenate two strings
//Join both the strings. Second string over first string.
#include<iostream>

using namespace std;

int main()
{
    char one[25],two[25];
    int i=0,j=0;

    cout<<"Enter String 1: ";
    cin>>one;
    cout<<"Enter String 2: ";
    cin>>two;

    while(one[i]!='\0')
    i++;

    while(two[j]!='\0')
    {
        one[i]=two[j];
        j++;
        i++;
    }

    one[i]='\0';
    cout<<"String Concatenated: "<<one<<endl;

    return 0;
}
