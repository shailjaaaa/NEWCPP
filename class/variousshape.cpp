#include<iostream>
using namespace std;
class Area
{
    public:
    Area(int a)
    {
        cout<<"Area of square:"<<a*a<<endl;
    }
    Area(int a,int b)
    {
        cout<<"Area of rectangle:"<<a*b<<endl;
    }
    Area(double a)
    {
        float pi=3.14;
        cout<<"Area of circle:"<<pi*a*a<<endl;
    }
    Area(double a,int b)
    {
        
        cout<<"Area of triangle:"<<0.5*a*b<<endl;
    }
};
int main()
{
    Area obj(10),obj1(10,10),obj2(10.0),obj3(10.0,10);
    return 0;
}