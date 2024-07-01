#include<iostream>
using namespace std;
class Sum
{
    public:
    Sum(int a)
    {
        cout<<"Value of a is:"<<a<<"\n";
    }
    Sum(char a)
    {
        cout<<"Value of a is :"<<a<<endl;
    }
    Sum(int a,int b)
    {
        cout<<"Addition of a and b is:"<<a+b<<"\n";
    }
    Sum(int a,int b,int c)
    {
        cout<<"Addition of a,b and c is:"<<a+b+c<<"\n";
    }    
};
int main()
{
    Sum obj(10,20,30),obj1(10),obj2('A'),obj3(10,20);
    return 0;
}