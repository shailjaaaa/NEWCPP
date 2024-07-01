#include<iostream>
using namespace std;
int main ()
{
    char a='A';
    for(a='A';a<='Z';a++)
    {
        cout<<a<<":"<<char(a+32)<<"\t";
    }
    return 0;

}
