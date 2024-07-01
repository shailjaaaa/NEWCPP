#include<iostream>
using namespace std;
struct Student
{
    int st[3];
    int sub[5];
    int total;
    float per;
    int roll;
};
int main()
{
    struct Student st[3];
    for(int i=0;i<3;i++)
    {
        st[i].total=0;
        st[i].per=0.00;
        cout<<"Enter roll no:";
        cin>>st[i].roll;
        for(int j=0;j<5;j++)
        {
            cout<<"Enter subject marks:";
            cin>>st[i].sub[j];
            st[i].total+=st[i].sub[j];
            st[i].per=st[i].total/5.00;
        }
        cout<<"Total marks:"<<st[i].total;
        cout<<"\nPercentage:"<<st[i].per<<"\n";
    }
    return 0;
}