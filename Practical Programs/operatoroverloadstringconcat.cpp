#include<iostream>
#include<cstring>

using namespace std;

class StringConcat
{
    char str1[50];


    public:


    StringConcat(char *a)
    {
        strcpy(str1,a);

    }

    StringConcat operator + (StringConcat S2)
    {
        StringConcat temp;
        strcpy(temp.str1,str1);
        strcat(temp.Str1,S2.str1);
        return (temp);
    }

};

int main()
{
    StringConcat S1("one");
    StringConcat S2("two");
    StringConcat S3(" ");
    S=S1+S2;
    S.display();
    return 0;
}
