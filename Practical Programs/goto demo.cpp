#include<iostream>
using namespace std;
int main()
{
    int a=0;

    cout<<"enter value of a\n";
    cin>>a;

    if (a==1)
    {
        goto one;

    }

    else if (a==2)
    {
        goto two;
    }

    else if (a==3)
    {
        goto three;
    }

   three:
   {
    one:
    {
        cout<<"hi\n";

    }

    two:
    {
      cout<<"hello\n";
    }

   }


   return 0;
}

