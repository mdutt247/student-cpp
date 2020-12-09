#include<iostream>

using namespace std;

class bank
{
    char cust_name[30];

    char acc_type[30];
    long bal;

    public:
    int acc_no;
    void initvalue(void);
    void deposit(void);
    void withdraw(void);
    void display(void);


};

void bank::initvalue(void)
{
    cout<<"Enter Customer Name: ";
    cin>>cust_name;
    cout<<"Enter Account Number: ";
    cin>>acc_no;
    cout<<"Enter Account Type: ";
    cin>>acc_type;
    cout<<"Enter Balance: ";
    cin>>bal;
}

void bank::deposit(void)
{
    int deposit;
    cout<<"Enter Amount to Deposit: ";
    cin>>deposit;
    bal=bal+deposit;
}

void bank::withdraw(void)
{
    int with;
    cout<<"Enter Amount to withdraw: ";
    cin>>with;

    if(with<=bal)
    {
        bal=bal-with;
    }
    else
    {
        cout<<"Low Balance!";
    }
}

void bank::display(void)
{
    cout<<"Name: "<<cust_name;
    cout<<"\nBalance: "<<bal;
}

int main()
{
    char ans;
    bank cust[10];
   int i=0, acn, j;
   int menu;
    do
    {

        cust[i].initvalue();
        i++;
        cout<<"\nDo you want to continue? (Y/N)\n";
        cin>>ans;
    }
    while(ans=='y'||ans=='Y');

    cout<<"\nPlease select any of the following:\n";
    cout<<"1. Deposit\n2. Withdraw\n3. Display\n";
    cin>>menu;

    cout<<"Enter the account number: ";
    cin>>acn;

    for(j=0;j<=10;j++)
    {
        if(acn==cust[j].acc_no)
        {
            break;
        }
    }

    switch(menu)
    {
        case 1:
        {
            cust[j].deposit();
        }
        break;
        case 2:
        {
            cust[j].withdraw();
        }
        break;
        case 3:
        {
            cust[j].display();
        }
    }
   // cust.initvalue();
   // cust.deposit();
   // cust.withdraw();
   // cust.display();
    return 0;
}
