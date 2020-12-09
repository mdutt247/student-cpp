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

    Integer(int a, int b)
    {
        x=a;
        y=b;

    }
    void display()
    {
        cout<<x<<" "<<y<<"\n";
    }
    Integer operator+(Integer i)
    {
        Integer temp;
        temp.x=x+i.x;
        temp.y=y+i.y;
        return(temp);
    }

};

int main()
{
    Integer i1,i2,i3;
   i1=Integer(2,3);
   i2=Integer(4,5);
   i3=i1+i2;

   cout<<"I1: "; i1.display();
   cout<<"I2: "; i2.display();
   cout<<"I3: "; i3.display();
    return 0;
}
