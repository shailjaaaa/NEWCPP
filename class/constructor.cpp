#include<iostream>
using namespace std;
class Student
{
    private:
    int adno;
    char sname[20];
    float math,sci,eng;
    float total;
    float ctotal(int math,int sci,int eng);
    
    public:
    
    void getdata()
    {
        cout<<"Enter admin number:";
        cin>>adno;
        cout<<"Student name:";
        cin>>sname;
        cout<<"Marks of maths:";
        cin>>math;
        cout<<"Marks of Science:";
        cin>>sci;
        cout<<"Marks of English:";
        cin>>eng;
    }
    void showdata()
    {
        cout<<"Admin number:"<<adno;
        cout<<"\nStudent name:"<<sname;
        cout<<"\nMaths marks:"<<math;
        cout<<"\nSci marks:"<<sci;
        cout<<"\nEng marks:"<<eng;
        cout<<"\nTotal:"<<ctotal(math,sci,eng)<<"\n";
    }
};
float Student:: ctotal(int math,int sci,int eng)
{
    return math+sci+eng;
}
int main()
{
    class Student st[3];
    for(int i=0;i<3;i++)
    {
    st[i].getdata();
    st[i].showdata();
    }
    return 0;
}