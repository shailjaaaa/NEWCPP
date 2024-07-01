#include<iostream>
using namespace std;

class Number{
    int a,b,c;
    
    friend void largest(Number x);
    
    public:
    void setdata(int x, int y,int z)
    {
        a=x,b=y,c=z;
    }
    void displaydata()
    {
        cout<<"Value of a is:"<<a<<endl;
        cout<<"Value of B is:"<<b<<endl;
        cout<<"Value of C is:"<<c<<endl;
    }
};
void largest(Number x)
{
 
    if(x.a>x.b && x.a>x.c){
        cout<<"A is largest"<<endl;
    }else if(x.b>x.a && x.b>x.c){
        cout<<"B is largest"<<endl;
    }else if(x.c>x.a && x.c>x.b){
        cout<<"C is largest"<<endl;
    }
    
}

int main()
{
    Number x;
    x.setdata(10,20,30);
    x.displaydata();
    largest(x);
    
    return 0;
}