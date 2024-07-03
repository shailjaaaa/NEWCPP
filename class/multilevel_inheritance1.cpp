#include<iostream>
using namespace std;
class Test
{
    protected:
    int testcode;
    char description[50];
    int candidno;
    int centerreq;
    float calcntr(int candidno);

    public:
    void schedule()
    {
        cout<<"Testcode:";
        cin>>testcode;
        cout<<"Description:";
        cin>>description;
        cout<<"Number of candidate:";
        cin>>candidno;  
    }
};
class Test1:public Test
{
    public:
    void disptest()
    {
        
        cout<<"Testcode:"<<testcode<<endl;
        cout<<"Description:"<<description<<endl;
        cout<<"Number of candidate:"<<candidno<<endl;
        cout<<"Center required:"<<calcntr(candidno)<<endl;       
         
    }   
};
class derive:public Test1
{
    int product()
    {
    
    }
    
};
float Test:: calcntr(int candidno)
{
    return candidno/100+1;
}
int main()
{
    class derive c;
    c.schedule();
    c.disptest();
    
    return 0;
}