#include<iostream>
using namespace std;
class Demo
{
    public:
    void test()
    {
        cout<<"Default function call"<<endl;
    }
    void test(int a)
    {
        cout<<"Parameter function call:"<<a<<endl;
    }
    void test(int a,int b)
    {
        cout<<"Addition of a and b:"<<a+b<<endl;
    }
};
int main()
{
    Demo t;
    t.test(10,20);
    t.test();
    t.test(10);
    return 0;
}