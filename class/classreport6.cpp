#include<iostream>
using namespace std;
class Report
{
    private:
    int adno;
    char name[20];
    int arr[5];
    int avg=0;
    int sum=0;
    float getavg(int avg);
    int i;
    int n=5;

    public:
    void readinfo()
    {
    
    
    cout<<"Enter admission number:";
    cin>>adno;
    cout<<"Enter name:";
    cin>>name;
    cout<<"Number of subjects:"<<n<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<"Enter marks of subject "<<i<<":";
        cin>>arr[i];
    }
    }
    void displayinfo()
    {
        cout<<"Enter admision number:"<<adno;
        cout<<"\nStudent name:"<<name;
        for(int i=0;i<n;i++)
        {
            cout<<"\nMarks of subject "<<i<<" :"<<arr[i];
            sum+=arr[i];
            
        }
        cout<<"\nTotal marks:"<<sum;
        cout<<"\nAverage:"<<getavg(avg);

    }
};
float Report:: getavg(int avg)
{
    return sum/5;
}
int main()
{
    class Report re;
    re.readinfo();
    re.displayinfo();
    return 0;
}