#include<fstream>
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(int argc, char * argv[])
{
    char line[40];
    if(argc!=3)
    {
        cout<<"Error in Arguments";
        exit(1);
    }
    ofstream fout;
    ifstream fin;

    fin.open(argv[1]);
    fout.open(argv[2]);

    int maxlen=0;
    while(fin)
    {
        fin.getline(line,40);
        int len=strlen(line);
      fout<<endl;
        if(len>maxlen)
        {
            maxlen=len;

        }
        fout<<line;
    }
fout<<endl<<"Max Length: "<<maxlen;
    fin.close();
    fout.close();
    return 0;
}
