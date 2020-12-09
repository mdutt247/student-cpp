//Exception Handling
//
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
//65 - 122
int temp,pemp, count=0;
char num;
cout<<"Enter a Number: ";

cin>>num;
if(num>='A'&&num<='Z')
{
    cout<<"num is" <<num;
}

temp=num;
pemp=temp;

try
{
if(num>='A' &&num<='Z')
{
    cout<<"AAAA";
   throw 't';
}
else
{
    while(num!=0)
{
    num=num/10;
    count++;
}

cout<<endl<<"No. of Digits: "<<count;
}
}
catch(char c)
{
cout<<"Exception is found!";
}

return 0;

}
