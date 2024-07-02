#include<iostream>
using namespace std;
class Student
{
    private:
    
    protected:
    int admno;
    char sname[20];
    float eng,math,sci;
    float total;
    float ctotal(int eng,int math,int sci);

    public:
    void takedata()
    {
         cout<<"Enter admin number:";
        cin>>admno;
        cout<<"Student name:";
        cin>>sname;
        cout<<"Marks of maths:";
        cin>>math;
        cout<<"Marks of Science:";
        cin>>sci;
        cout<<"Marks of English:";
        cin>>eng;
    }

};
class derive:public Student
{
    public:
    
    void showdata()
    {
        takedata();

        cout<<"Admin number:"<<admno;
        cout<<"\nStudent name:"<<sname;
        cout<<"\nMaths marks:"<<math;
        cout<<"\nSci marks:"<<sci;
        cout<<"\nEng marks:"<<eng;
        cout<<"\nTotal:"<<ctotal(math,sci,eng);
   
    }
};
float Student:: ctotal(int math,int sci,int eng)
{
    return math+sci+eng;
}

int main()
{
    class derive ob;
    ob.showdata();
    return 0;
}