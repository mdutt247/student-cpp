#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char str1[50], str2[50];
    int len, i ,j=0;

    cout<<"Enter a string: ";
    cin>>str1;

    len=strlen(str1);

    cout<<endl<<"Length of String: "<<len;

    for(i=len-1;i>=0;i--,j++)
    {

           str2[j]=str1[i];

    }
    str2[j++]='\0';
    cout<<endl<<"String 2: "<<str2<<endl;
    return 0;
}
