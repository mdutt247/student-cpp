#include<iostream>
#include<string.h>
 using namespace std;

 int main()
 {
     try{

     char username[25]="abc", password[10]="dsd";
     char user[25],pwd[10];

    cout<<"Enter the Username: ";
    cin>>user;

    cout<<"Enter the Password: ";
    cin>>pwd;

    if(strcmp(user,username)|| strcmp(pwd,password))
    {
    throw 2;
    }
    else
    {
         cout<<"Valid  Username and Password";
    }
}
catch(int i)
{
    cout<<"Invalid Username or Password";
}

     return 0;
 }
