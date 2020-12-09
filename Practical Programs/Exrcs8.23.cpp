#include<iostream>
#include<cstring>
using namespace std;

class person
{
protected:
char name[25];
int code;

public:
   person(char *a,int b)
   {
       strcpy(name,a);
       code=b;
       cout<<"Person Init\n";
   }

   void show_person()
   {
       cout<<"Name:"<<name<<"\n";
       cout<<"Code:"<<code<<"\n";
   }


};

class account: public person
{
protected:
int pay;

public:
   account(char* r,int t,int c):person(r,t)
   {
       pay=c;
       cout<<"Account Init\n";
   }

   void show_account()
   {
       cout<<"Pay:"<<pay<<"\n";
   }
};

/*class admin: public virtual person
{
protected:
int experience;

public:
   admin(int d)
   {
       experience=d;
       cout<<"Admin Init\n";
   }

   void show_admin()
   {
       cout<<"Experience:"<<experience<<"\n";
   }

};*/

class master: public account
{
    public:
    master(char *v, int w, int x):account(v,w,x)
    {

        cout<<"Master Init";

    }

    void show_master()
    {
        show_person();
        show_account();
      //  admin.show_admin();
    }
};
int main()
{
    master M("venk",100,250);
    M.show_master();

    return 0;
}
