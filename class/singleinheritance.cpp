#include<iostream>
using namespace std;
class Base
{
    private:
    int a=10;
    int b=20;

    protected:
    int d=20;

    public:
    int c=0;

    int sum()
    {
        return a+b;
    }
};
class derive:public Base
{
    public:
    int total=0;
    void display()
    {
        total=sum();
        cout<<"Total is:"<<total<<c<<d;
    }

};
int main()
{
    class derive ob;
    ob.display();
    return 0;
}