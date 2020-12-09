#include<iostream>
using namespace std;

class A
{
    protected:
    int a;
    public:
    void getdata()
    {
        cout<<"\nEnter the value of A: ";
        cin>>a;
    }
    void displaydata()
    {
        cout<<"\nThe value of A is: "<<a;
    }
};

class B: public virtual A
{
    protected:
    int b;
    public:
    void getdata1()
    {
        cout<<"\nEnter the value of B: ";
        cin>>b;
    }
    void displaydata1()
    {
        cout<<"\nThe value of B is: "<<b;
    }
};

class C: public virtual A
{
    protected:
    int c;
    public:
    void getdata2()
    {
        cout<<"\nEnter the value of C: ";
        cin>>c;
    }
    void displaydata2()
    {
        cout<<"\nThe value of C is: "<<c;
    }
};

class D: public B,C
{
    protected:
    int d;
    public:
    void getdata3()
    {
        cout<<"\nEnter the value of D: ";
        cin>>d;
    }
    void displaydata3()
    {
        cout<<"\nThe value of D is: "<<d;
    }

    void printdata()
    {
        getdata();
        getdata1();
        getdata2();
        getdata3();
        displaydata();
        displaydata1();
        displaydata2();
        displaydata3();

    }
};

int main()
{
    D obj1;
    obj1.printdata();
    return 0;
}
