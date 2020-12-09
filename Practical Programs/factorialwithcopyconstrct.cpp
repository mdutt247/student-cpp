#include<iostream>
using namespace std;
class ravi
{
    int num;

    public:
    ravi()
    {
        num=0;
    }
    ravi(int a)
{
    num=a;
}
  /* ravi(ravi &X)
   {
       num=X.num;

   }
*/
   void factorial()
   {
       int i,fact=1;
       for(i=1;i<=num;i++)
       {
           fact=fact*i;
       }
       cout<<"factorial is  "<<fact<<endl;
   }

};
int main()
{

    ravi B(5);
    ravi A=B;
   A.factorial();
    return 0;
}

