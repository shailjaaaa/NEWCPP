#include<iostream>
using namespace std;
class Book
{
    protected:
    int bookno;
    char booktitle[20];

    public:
    void input()
    {
        cout<<"Book number:";
        cin>>bookno;
        cout<<"Book title:";
        cin>>booktitle;
    }

};
class Book1
{
    protected:
    float price;
    int n;
    float totalcost(int n);
    
    public:
    void output()
    {
        cout<<"Book price:";
        cin>>price;
        cout<<"Number of books:";
        cin>>n;
    }
     

};
class derive:public Book, public Book1
{
    public:
    void totalprice()
    {
         cout<<"\nBook number:"<<bookno;
         cout<<"\nBook title:"<<booktitle;
         cout<<"\nBook price:"<<price;

         cout<<"\nTotal price:"<<totalcost(n);
    }

};
float Book1:: totalcost(int n)
{
    return n*price;
}

int main()
{
    derive c;
    c.input();
    c.output();
    c.totalprice();
    return 0;
}