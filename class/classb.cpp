#include<iostream>
using namespace std;
class Employee
{
    private:
    int a;
    int b;

    public:

    void getdata(int a1,int b1)
    {
        a=a1;
        b=b1;
    }
    void sum()
    {
        cout<<a+b;
    }
};
int main()
{
    class Employee emp1;
    emp1.getdata(10,20);
    emp1.sum();
    return 0;
}