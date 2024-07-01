
#include<iostream>
using namespace std;
class Shape
{
    public:
    void volume(int a)
    {
        //square 
        cout<<"Volume of cube:"<<a*a*a<<"\n";
    }
    void volume(int a,int b,int c)
    {
        //rectangle
        cout<<"Volume of cuboid:"<<a*b*c<<"\n";
    }
    void volume(double a)
    {
        //Sphere
       float pi=3.14;
        cout<<"Volume of sphere:"<<1.33*pi*a*a*a<<"\n";
    }
    void volume(int a,int b)
    {
        //cone
       float pi=3.14;
        cout<<"Volume of cone:"<<0.33*pi*a*a*b;
    }
};
int main()
{
    Shape obj;                                                                                   
    obj.volume(10);
    obj.volume(10,5,20);
    obj.volume(10.00);
    obj.volume(10,20);
     
    return 0;
}