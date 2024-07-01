#include<iostream>
using namespace std;
int main()
{
    int k=0;
    char name[50];
    gets(name);
    for(int i=0;name[i]!='\0';i++,k++)
    {}
    for(int i=k;i>=0;i--)
    {
    cout<<name[i];
    }
    cout<<"\nLength of string"<<k;

    return 0;
}
