#include<iostream>
using namespace std;
int main()
{
   int n,i;
   
   cout<<"Enter array size:";
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
   {
        cout<<"Enter element of "<<i<<":";
        cin>>arr[i];
   }
   for(i=0;i<n;i++)
   {
    cout<<arr[i]<<"\t";
   }
    return 0;
}