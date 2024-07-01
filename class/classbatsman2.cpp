#include<iostream>
using namespace std;
class Batsman
{
    private:
    int bcode;
    char bname[20];
    int inning,notout,run;
    int batavg;
    float calcavg(int inning,int notout,int run);

    public:
    void readdata()
    {
        cout<<"Batsman Code:";
        cin>>bcode;
        cout<<"Batsman name:";
        cin>>bname;
        cout<<"Innings:";
        cin>>inning;
        cout<<"Notout:";
        cin>>notout;
        cout<<"Runs:";
        cin>>run;
    }
    void displaydata()
    {
        cout<<"Batsman code:"<<bcode;
        cout<<"\nBatsman name:"<<bname;
        cout<<"\nInnings:"<<inning;
        cout<<"\nNoutout:"<<notout;
        cout<<"\nRuns:"<<run;
        cout<<"\nBatavg:"<<calcavg(inning,notout,run);
    }
};
float Batsman :: calcavg(int inning,int notout,int run)
{
    return run/(inning-notout);
}

int main()
{
    class Batsman bt;
    bt.readdata();
    bt.displaydata();
    
    return 0;
}