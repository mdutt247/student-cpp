//Sort Array in Descending Order using Class
#include<iostream>
#include<cstring>

using namespace std;
class descort
{
    int arr[100],i,j,element,no,temp;

    public:

    void getelements()
    {
        cout<<"\nEnter the No. of Elements of Array: ";
        cin>>no;

        for(i=0;i<no;i++)
     {
          cout<<"\n Enter Element "<<i+1<<": ";
          cin>>arr[i];
     }

    }

    void sort()
    {

     for(i=0;i<no;i++)
     {
          for(j=i;j<no;j++)
          {
               if(arr[i]<arr[j])
               {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
               }
            }
     }

     cout<<"\nSorted Array:";

     for(i=0;i<no;i++)
     {
          cout<<"\t"<<arr[i];
     }

    cout<<endl;
    }
};
int main()
{


descort obj1;
obj1.getelements();
obj1.sort();


     return 0;
}
