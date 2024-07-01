#include<iostream>
using namespace std;
int maths,phy,chem,total;
float per;
void student()
{
    cout<<"Maths marks:";
    cin>>maths;
    cout<<"Physics marks:";
    cin>>phy;
    cout<<"Chemistry marks:";
    cin>>chem;
    total=maths+chem+phy;
}
void total1()
{
    student();
    per=total/3.00;
    cout<<"Total marks:"<<total;
    cout<<"\nPercentage:"<<per;
}
int main()
{
    total1();
    return 0;
}