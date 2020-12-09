#include<iostream>
#include<cstring>

using namespace std;

class student
{
    char name[20];
    int roll;
    float avg;

    public:

    student(char *s, int n, float a)
    {
        strcpy(name,s);
        roll=n;
        avg=a;
    }

    student & greater(student &s)
    {
        if(s.avg>avg)
        {
            return s;
        }
        else
        {
            return *this;
        }
    }

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Average: "<<avg<<endl;
    }
};

int main()
{
    student s1("A",101,87.50),s2("B",103,91.70),s3("C",102,98.50);

    student s(" ",0,0.0);

    s=s1.greater(s2);
    s.display();

    s=s2.greater(s3);
    s.display();

    return 0;
}
