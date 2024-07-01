#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int sum=0;
    cout<<"Number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<"\t";
            sum+=i;
        }
    }
    cout<<"\nSum of number:"<<sum;
    return 0;
}