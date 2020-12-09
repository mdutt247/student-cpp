#include<iostream>

using namespace std;

class Integer
{
    int x,y;

    public:
    Integer()
    {
        x=0;y=0;
    }
2
    Integer(int a, int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<x<<""<<y<<"\n";
    }
    void operator-()
    {
        x=-x;
        y=-y;
    }

};

int main()
{
    Integer i1(20,30);
    i1.display();
    -i1;
    i1.display();
    return 0;
}
