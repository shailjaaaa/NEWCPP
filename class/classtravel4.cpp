#include<iostream>
using namespace std;
class Travel
{
    private:
    int flightno;
    char destination[50];
    float distance;
    float fuel;
    float calcfuel(int distance);

    public:
    void feedinfo()
    {
        cout<<"Flight number:";
        cin>>flightno;
        cout<<"Destination:";
        cin>>destination;
        cout<<"Distance:";
        cin>>distance;    
    }
    void showinfo()
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
};
float Travel:: calcfuel(int distance)
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
    class Travel tra;
    tra.feedinfo();
    tra.showinfo();
    return 0;
}
        
   