#include<iostream>
using namespace std;

class alpha
{
    protected:
   int x;

   public:
   alpha(int i)
   {
       x=i;
       cout<<"Alpha Initialized\n";
   }

   void show_x()
   {
       cout<<"X= "<<x<<"\n";
   }
};

class beta
{
    protected:
    float y;

    public:
    beta(float j)
    {
        y=j;
        cout<<"Beta Initialized\n";
    }

    void show_y(void)
   {
       cout<<"Y= "<<y<<"\n";
   }
};

class gamma: public beta,public alpha
{
    int m,n;
    public:
    gamma(int a, float b, int c, int d):alpha(a),beta(b)
    {
        m=c;
        n=d;
        cout<<"Gamma Initialized";

    }

    void show_mn()
    {
        cout<<"M= "<<m<<"N= "<<n<<"\n";
    }
};
int main()
{
    gamma G(5,10.75,20,30);
    cout<<endl;
    G.show_x();
    G.show_y();
    G.show_mn();

    return 0;
}
