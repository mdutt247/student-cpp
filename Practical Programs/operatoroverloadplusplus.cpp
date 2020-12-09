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

    Integer(int a)
    {
        x=a;


    }
    void display()
    {
        cout<<x<<"\n";
    }

    Integer operator+()
    {
      cout<<"\n";
    }

    Integer operator++()
    {
       x++;
    }

     Integer operator--()
    {
       x--;
    }

};

int main()
{
    Integer i1,i2,nl;
   i1=Integer(2);
   i2=Integer(4);

    cout<<"I1: "; i1.display();
    cout<<"I2: "; i2.display();

    ++i1;
    ++i2;

+nl;

    cout<<"I1: "; i1.display();
   cout<<"I2: "; i2.display();


    --i1;
    --i2;

+nl;

   cout<<"I1: "; i1.display();
   cout<<"I2: "; i2.display();

   ++(--i1);
   ++--i2;

+nl;

   cout<<"I1: "; i1.display();
   cout<<"I2: "; i2.display();

       return 0;
}
