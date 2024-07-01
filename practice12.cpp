#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int arr[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter element of "<<i<<" and "<<j<<":";
            cin>>arr[i][j];
        }

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
