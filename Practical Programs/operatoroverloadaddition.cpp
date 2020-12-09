#include<iostream>
#include<cstring>

using namespace std;

class StringConcat
{
    int a;

    public:
    StringConcat()
    {

    }
    StringConcat(int x)
    {
      a=x;
    }


    void display()
    {
        cout<<a<<"\n";
    }
    StringConcat  operator +( StringConcat S2)
    {
        StringConcat temp;
        temp.a=a+S2.a;
        return temp;

    }

};

int main()
{
    StringConcat S1(10);
    StringConcat S2(20);
    StringConcat S3;
    S3=S1+S2;

    S3.display();;

    return 0;
}
