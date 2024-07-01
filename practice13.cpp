#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int dia=0,up=0,low=0;
    int arr[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Element of "<<i<<" and "<<j<<":";
            cin>>arr[i][j];

        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(arr[i][j]==0)
            {
                cout<<"\t";
            }
            else
            {
                cout<<arr[i][j]<<"\t";
            }
            if(i<j)
            {
                up+=arr[i][j];
            }
            else if(i==j)
            {
                dia+=arr[i][j];
            }
            else
            {
                low+=arr[i][j];
            }
            
            
        }
        cout<<"\n";
    }
    cout<<"\nDiagonal sum:"<<dia;
    cout<<"\nUpper triangle sum:"<<up;
    cout<<"\nLower triangle sum:"<<low;

    return 0;
}