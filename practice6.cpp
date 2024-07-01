#include<iostream>
using namespace std;
int main()
{
    int i;
    int n;
    int sum=0;
    cout<<"Number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum+=i;
        cout<<i<<"\t";
    }
    cout<<"\nSum of number:" <<sum;

    return 0;
}