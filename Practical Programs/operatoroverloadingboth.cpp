#include<iostream>
using namespace std;

class opol
{
    int x,y;

    public:
    opol()
    {
        x=0, y=0;
    }

    opol(int vx, int vy)
    {
        x=vx;
        y=vy;
    }

    void display()
    {
        cout<<"X="<<x<<"  ";
        cout<<"Y="<<y<<"\n";
    }

    void operator++()  //Pre-Incr. ++
    {
       ++x;
       ++y;
    }

     void operator--() //Pre-Incr. --
    {
       --x;
       --y;
    }

    opol operator++( int ) //Post-Incr. ++
      {
         opol T(x,y);
         ++x;
         ++y;
         return T;
      }

    opol operator--( int ) //Post-Incr. --
      {
         opol T(x,y);
         --x;
         --y;
         return T;
      }
};

int main()
{
    opol a1(90,30),a2(10,20);

    cout<<"Pre-Increment & Decrement:"<<endl;
    cout<<"  A1: "; a1.display();
    ++a1;
    cout<<"++A1: "; a1.display();
    --a1;
    cout<<"--A1: "; a1.display();

    cout<<endl;

    cout<<"Post-Increment & Decrement:"<<endl;
    cout<<"  A2: "; a2.display();
    a2++;
    cout<<"A2++: "; a2.display();
    a2--;
    cout<<"A2--: "; a2.display();

   return 0;
}
