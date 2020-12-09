#include<iostream>
#include<cstring>
using namespace std;

class tilak
{
    protected:
    int i,len;
    char name[100];

    public:
    tilak(char n[])
    {
   strcpy(name,n);
    }


    void generate1()
    {
        len=strlen(name);

       for(i=0;i<=len-1;i++)
       {
           for(int j=0;j<=i;j++)
           {
               cout<<name[j];
           }
           cout<<endl;
       }
    }

    void generate2()
    {
       for(i=len-2;i>=0;i--)
       {
           for(int j=0;j<=i;j++)
           {
               cout<<name[j];
           }
           cout<<endl;
       }
    }

};



int main()
{
    char a[20];
    cout<<"Enter your name: ";
    cin>>a;
    tilak t1(a);
    t1.generate1();
    t1.generate2();
    return 0;
}
