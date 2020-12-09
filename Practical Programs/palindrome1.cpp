#include<iostream>
#include<cstring>

using namespace std;

int main()
{


int name,no,rem,sum=0,temp;
cin>>no;
temp=name;

while(no>0)
{
rem=no%10;
sum=(sum*10)+rem;
cout<<"\n"<<sum;
no=(no/10);
}
if(temp==sum)
cout<<"\nThe given no is palindrome";
else
cout<<"\nThe given no is not palindrome";

return 0;


}
