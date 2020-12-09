/*
Create a class Quadrilateral having a function to calculate the area of the quadrilateral.
Create 2 subclasses of this class - Square and Rectangle.
These classes also have functions to calculate the area.

1. Show the use of protected variable.
2. Show Inheritance - public, protected and private.
3. Show how will you call the area function of each class.
*/

#include<iostream>
#include<conio.h>
#include<math.h>

#define PI 3.141592654

using namespace std;

class quadrilateral
{
    protected:

        float AllArea[]; //protected variable for storing areas from all classes

    public:

        void disp(int a)
        {
            int ty=a;
            cout<<endl;
            cout<<"Area of "<<ty<<"is: ";
        }

        void area(float s1, float s2, float s3, float s4, float a1, float a2)
        {
            int i;
            float aQuad=0.0f, side[4], angles[2], sAngles=0.0f, sPerim=0.0f;


            for(i=0;i<=3;i++)
            {
                sPerim=sPerim+side[i];
            }

            sPerim=sPerim/2;


            for(i=0;i<=1;i++)
            {
                sAngles=sAngles+angles[i];
            }

            aQuad = sqrt(((sPerim-side[0])*(sPerim-side[1])*(sPerim-side[2])*(sPerim-side[3]))-(0.5*side[0]*side[1]*side[2]*side[3]*(pow(cos(PI*sAngles/2/180),2))));
            cout<<endl;
            cout<<"Area of Quadrilateral is: "<<aQuad;

            AllArea[0]=aQuad; //Storing area in protected variable of parent class

            disp(1);
        }
    };

class square: public quadrilateral //Inherited (public) from class quadrilateral
{
     public:
        void area(float a)
        {
            float side, aSquare;
            side=a;
            aSquare=side*side;
            cout<<endl;
            cout<<"Area of Square is: "<<aSquare;
            AllArea[1]=aSquare; //Storing area in protected variable of parent class
        }
};

class rectangle: private quadrilateral //Inherited (private) from class quadrilateral
{
    public:
        void area(float a, float b)
        {
            float l, w, aRect;
            l=a; w=b;
            cout<<endl<<endl<<"**Enter values of length & width of the Rectangle**"<<endl;
            aRect=w*l;
            AllArea[2]=aRect; //Storing area in protected variable of parent class
        }
};

//class display: protected square //Inherited (protected) from class square
//{
//    public:
//        void disp()
//        {
//            int i;
//            cout<<endl<<endl<<"**Displaying Areas obtained from all Classes:"<<endl;
//            for(i=0;i<=2;i++)
//            {
//                cout<<"Area["<<i<<"]: "<<AllArea[i]<<endl; //Accessing protected var array AllArea[] and displaying areas obtained from all classes
//            }
//        }
//};

int main()
{
    quadrilateral objQuad;
    objQuad.area(); //Calling the area() of quadrilateral class

    square objSquare;
    objSquare.area(); //Calling the area() of square class

    rectangle objRect;
    objRect.area(); //Calling the area() of rectangle class

  //  display objDisp;
  //  objDisp.disp(); //Calling the disp() of display class

    return 0;
}
