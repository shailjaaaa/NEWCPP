#include<iostream>
using namespace std;
class Travel
{
    protected:
    int flightno;
    char destination[50];

    public:
    void feedinfo()
    {
        cout<<"Flight number:";
        cin>>flightno;
        cout<<"Destination:";
        cin>>destination;   
    }
};
class Travel1
{
    protected:
    float distance;
    float fuel;
    float calcfuel(int distance);

    public:
    void feedinformation()
    {
        cout<<"Distance:";
        cin>>distance;
        cout<<endl;    
    }
};
class derive:public Travel,public Travel1
{
    public:
    void showinfo()
    {
        cout<<"Flight number:"<<flightno<<endl;
        cout<<"Destination:"<<destination<<endl;
        cout<<"Distance:"<<distance<<endl;
        
        
        if(0<distance && distance<1000)
    {
        fuel=500;
        cout<<"Fuel used:"<<fuel;
    }
    else if(1000<distance && distance<2000)
    {
        fuel=1100;
        cout<<"Fuel used:"<<fuel;
    }
    else
    {
        fuel=2200;
        cout<<"Fuel used:"<<fuel;
    }
    }

};
float Travel1:: calcfuel(int distance)
{
    if(0<distance && distance<1000)
    {
        fuel=500;
        cout<<"Fuel used:"<<fuel;
    }
    else if(1000<distance && distance<2000)
    {
        fuel=1100;
        cout<<"Fuel used:"<<fuel;
    }
    else
    {
        fuel=2200;
        cout<<"Fuel used:"<<fuel;
    }
}
int main()
{
    class derive c;
    c.feedinfo();
    c.feedinformation();
    c.showinfo();
    return 0;
}