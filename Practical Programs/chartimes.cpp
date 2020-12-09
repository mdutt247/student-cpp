using namespace std;
#include<iostream>
#include<conio.h>
#include<cstring>

class ravi
{
    char s[20];
    //int m;
    public:
    void display(char *b, int n)
    {
        strcpy(s,b);
        int i;

       for(i=1;i<=n;i++)
       {
           cout<<s<<endl;
       }
    }
    };
    int main()
    {
        int h;
        char n[20];
        cout<<" enter the character array \n";
        cin>>n;
        cout<< "enter the number off times \n ";
        cin>>h;
            ravi v;
            v.display(n,h);
            return 0;
    }
