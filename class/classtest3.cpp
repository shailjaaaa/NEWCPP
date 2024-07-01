#include<iostream>
using namespace std;
class Test
{
    private:
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
    void disptest()
    {
        
        cout<<"Center required:"<<calcntr(candidno);
        
    }
};
float Test:: calcntr(int candidno)
{
    return candidno/100+1;
}
int main()
{
    class Test te;
    te.schedule();
    te.disptest();
    return 0;
}