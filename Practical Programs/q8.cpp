/*
Create a class Quadrilateral having a function to calculate the area of
the quadrilateral.  Create 2 subclasses of this class - Square and Rectangle.
These classes also have functions to calculate the area.

1. Show the use of protected variable.
2. Show Inheritance - public, protected and private.
3. Show how will you call the area function of each class.
*/
using namespace std;
#include"iostream"

class CQuadrilateral
{
    private:
        void getinput()
        {
            cout<<"Enter 3 values";
            cin>>var1>>var2>>var3;
        }
    protected:
        int var1,var2,var3,ar;
    public:
        void farea()
        {
            getinput();
            ar=var1/2*(var2+var3);          // 1/2 d (h1 + h2)
            cout<<ar<<endl;
        }

};

class CSquare : CQuadrilateral
{
    private:
        void getinput()
        {
            cout<<"Enter 1 value";
            cin>>var1;
        }
    public:
        void farea()
        {
            getinput();
            ar=var1*var1;                   //l*l
            cout<<ar<<endl;
        }
};

class CRectangle : CQuadrilateral
{
    private:
        void getinput()
        {
            cout<<"Enter 2 values";
            cin>>var1>>var2;
        }
    public:
        void farea()
        {
            getinput();
            ar=var1*var2;                   //l*l
            cout<<ar<<endl;
        }
};

int main()
{
CSquare s;
s.farea();
CQuadrilateral q;
q.farea();
CRectangle r;
r.farea();
return 0;
}

