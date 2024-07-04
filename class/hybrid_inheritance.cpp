#include<iostream>
using namespace std;

class Base
{
    protected:
    int a;

    public:
    void setA()
    {
        cout<<"Enter a:";
        cin>>a;
    }
};
class derive1:public Base
{
    protected:
    int b;

    public:
    void setB()
    {
        cout<<"Enter b:";
        cin>>b;
    }
    void sum()
    {
        cout<<"Sum of a and b:"<<a+b;
    }
};
class Base1
{
    protected:
    int c;

    public:
    void setC()
    {
        cout<<"Enter c:";
        cin>>c;
    }
};
class derive2:public derive1,public Base1
{
    protected:
    int d;

    public:
    void setD()
    {
        cout<<"Enter d:";
        cin>>d;
    }
    void sum()
    {
        cout<<"Sum into a and b:"<<a*b*c*d<<endl;
    }
};
int main()
{
    class derive2 obj;
    obj.setA();
    obj.setB();
    obj.setC();
    obj.setD();
    obj.sum();

    class derive1 obj1;
    obj1.setA();
    obj1.setB();
    obj1.sum();
    return 0;
}