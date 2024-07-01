#include<iostream>
using namespace std;
void number(int n,int arr[5])
{
    int i,j;
    int temp=0;
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<"\n";
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    number(5,arr);
    return 0;
}