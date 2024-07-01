#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int x=3,y=5;
    int sum=0;
    float per=0.0;
    cout<<"total subject:"<<x<<"\t";
    int sub[y];
    int stu[x];
    for(i=0;i<x;i++)
    {
        sum=0;
        per=0.0;
        cout<<"\nEnter roll number:";
        cin>>stu[i];
    
    for(j=0;j<y;j++)
    {
        cout<<"Enter sub marks "<<j<<":";
        cin>>sub[j];
        sum+=sub[j];
    }
    cout<<"Total marks:"<<sum;
    per=sum/5;
    cout<<"\nPercentage :"<<per;
     if(80<per && per<100)
    {
        cout<<"\nGrade A";
    }
    else if(60<per && per<80)
    {
        cout<<"\nGrade B";
    }
    else if(40<per && per<60)
    {
        cout<<"\nGrade c";
    }
    else
    {
        cout<<"\nFail";
    }
    }
    
   

    return 0;
}