#include<iostream>

using namespace std;

class books
{
    static int count;
    char title[30];
    char author[30];
    int price;
    char publisher[30];
    char stockpos[30];
    int copies;

    public:

    void bookentry(void);
    void booksearch(void);

 static void bookcount(void)
 {
     cout<<count<<"\n";
 }
};

void books::bookentry()
{
    cout<<"Enter the Author: ";
    cin>>author;

    cout<<"Enter the Title: ";
    cin>>title;

    cout<<"Enter the Price: ";
    cin>>price;

    cout<<"Enter the Publisher: ";
    cin>>publisher;

    cout<<"Enter the Copies: ";
    cin>>copies;

    cout<<"Enter the Stock Position: ";
    cin>>stockpos;

    count++;
}

//void books::booksearch(void)
int books::count;
int main()
{
   books b[10];
   int i=0;
   char ans;
   int menu;
    do
    {

        b[i].bookentry();
        i++;
        cout<<"\nEnter more book records? (Y/N)\n";
        cin>>ans;
    }
    while(ans=='y'||ans=='Y');

    cout<<"\nNo. of books stored: ";
    books::bookcount();

    return 0;
}
