#include<iostream>
using namespace std;
class Base 
{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"Enter A:";
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
        cout<<"Sum of a and b:"<<a+b<<endl;
    }
};
class derive2:public Base
{
    protected:
    int c;
    public:
    void setC()
    {
        cout<<"Enter c:";
        cin>>c;
    }
    void sum()
    {
        cout<<"Multiply of a and c:"<<a*c;
    }
};


int main()
{
    class derive1 obj;
    obj.setA();
    obj.setB();
    obj.sum();

    class derive2 obj1;
    obj1.setA();
    obj1.setC();
    obj1.sum();
    
    return 0;
}