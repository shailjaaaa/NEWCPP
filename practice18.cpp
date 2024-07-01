#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int sum=0;
    cout<<"Enter number:";
    cin>>n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
            cout<<i<<"\n";
        }
    }
        if(sum==n)
        {
            cout<<"Perfect number";
        }
        else
        {
            cout<<"Not perfect number";
        }
    

    return 0;
}