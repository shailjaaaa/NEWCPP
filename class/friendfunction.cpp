#include<iostream>
using namespace std;

class Box{
    friend Box add(Box,Box);
    int l,w,h;
    public:
    void setdata(int a, int b,int c)
    {
        l=a,w=b,h=c;
    }
    int getvolume()
    {
        return l*w*h;
    }
};
Box add(Box a,Box b)
{
    Box t;
    t.l=a.l+b.l;
    t.w=a.w+b.w;
    t.h=a.h+b.h;
    return t;
}

int main()
{
    Box a,b,c,d;
    a.setdata(2,2,2);
    b.setdata(5,5,5);
    cout<<"Volume of A is:"<<a.getvolume()<<endl;
    cout<<"Volume of B is:"<<b.getvolume()<<endl;
    c=add(a,b);
    cout<<"Volume of C is:"<<c.getvolume()<<endl;
    return 0;
}