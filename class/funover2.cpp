#include<iostream>
using namespace std;
class Shape
{
    public:
    void area(int a)
    {
        cout<<"Area of square:"<<a*a<<endl;
    }
    void area(int a,int b)
    {
        cout<<"Area of rectangle:"<<a*b<<endl;
    }
    void area(int a,double b)
    {
        cout<<"Area of triangle:"<<0.5*a*b<<endl;
    }
    void area(double a)
    {
        float pi=3.14;
        cout<<"Area of circle:"<<pi*a*a<<endl;
    }
};
int main()
{
    Shape s;
    s.area(10);
    s.area(5,10);
    s.area(10,10.00);
    s.area(7.00);
    return 0;

}