#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    ofstream out;
    out.open("ItemRecords.txt");

    char iname[20][20];
    int icode[20], icost[20], i;

    for(i=0; i<3; i++)
    {
        cout<<"Enter Item"<<"["<<i+1<<"]"<<" Code: ";
        cin>>icode[i];

        cout<<"Enter Item"<<"["<<i+1<<"]"<<" Name: ";
        cin>>iname[i];

        cout<<"Enter Item"<<"["<<i+1<<"]"<<" Cost: ";
        cin>>icost[i];
        cout<<endl;
    }

    out<<"Item Code: "<<"\t"<<"Item Name: "<<"\t"<<"Item Cost: "<<endl;

    for(i=0; i<3; i++)
    {
         out<<icode[i]<<"\t\t";
         out<<iname[i]<<"\t\t";
         out<<"Rs."<<icost[i]<<"\n";
    }
    out.close();

    cout<<"Items Added Successfully!"<<endl;
    return 0;
}

