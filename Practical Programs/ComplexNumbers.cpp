//Complex Number
//Add/Subtract Real & Imaginary of Complex.. Get/Display/Add/Sub
// a+ib +/- x+iy

#include<iostream>
#include<cstring>

using namespace std;
class complx
{
    public:
    int r,i;

    complx()
    {
        r=i=0;
    }

    void add(complx op1, complx op2)
    {
        r=op1.r+op2.r;
        i=op1.i+op2.i;
    }

    void subtract(complx op1, complx op2)
    {
        r=op1.r-op2.r;
        i=op1.i-op2.i;
    }

    void print(char* mode)
    {
        cout << "\nThe "<<mode<<" is: "<<r<<"+"<<i<<"i"<<endl;
    }
};
int main()
{
    char select;
    complx op1,op2,result;

    cout<<"Do you wish to Add(A) or Subtract(S) the Complex Operands: ";
    cin>>select;

    if(select=='A' || select=='S')
    {
    cout<<"\nInput real part for operand one: ";
    cin>>op1.r;
    cout<<"Input imaginary part for operand one: ";
    cin>>op1.i;

    cout<<endl<<"Complex Operand 1: "<<op1.r<<"+"<<op1.i<<"i"<<endl<<endl;;

    cout << "Input real part for operand two: ";
    cin >> op2.r;
    cout << "Input imaginary part for operand two: ";
    cin >> op2.i;

    cout<<endl<<"Complex Operand 2: "<<op2.r<<"+"<<op2.i<<"i"<<endl<<endl;;
}
    switch(select)
    {
        case 'A':
        {
            result.add(op1, op2);
            result.print("sum");
        }

        break;

        case 'S':
        {
            result.subtract(op1, op2);
            result.print("difference");
        }

        break;

        default:
        {
            cout<<endl<<"Wrong Input! Please try with A or S only."<<endl;
        }
    }
     return 0;
}
