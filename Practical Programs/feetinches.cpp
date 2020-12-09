#include<iostream>

using namespace std;
class db;

class dm
{
    float metres;
    float centimetres;

    public:

    friend dm con(db db1, dm dm1);

    void getdata(float m, float c)
    {
        metres=m;
        centimetres=c;
    }

    void putdata()
    {
        cout<<"Metres: "<<metres;
        cout<<"Centimetres: "<<centimetres;
    }
};

class db
{
    float feet;
    float inches;

    public:

    friend dm con(db db1, dm dm1);

    void getdata(float i, float f)
    {
        inches=i;
        feet=f;
    }

    void putdata()
    {
        cout<<"Feet: "<<feet;
        cout<<"Inches: "<<inches;

    }
};

dm con(db db1, dm dm1)
{
    dm L;


    db1.feet=db1.feet+(db1.inches/12);

 //   dm1.metres=dm1.metres+(db1.centimetres/100);

    L.metres=dm1.metres+(db1.feet/3.28);

    L.centimetres=dm1.metres/100;

    return L;
}

int main()
{
    dm M, CM;
    M.getdata(2.0,20.0);
    db B;
    B.getdata(3.0,11.0);

    CM=con(B,M);
    M.putdata();
    B.putdata();
    CM.putdata();

    return 0;
}

