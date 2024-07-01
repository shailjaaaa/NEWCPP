#include<iostream>
using namespace std;
class Book
{
    private:
    int bookno;
    char booktitle[20];
    float price;
    int n;
    float totalcost(int n);

    public:
    void input()
    {
        cout<<"Book number:";
        cin>>bookno;
        cout<<"Book title:";
        cin>>booktitle;
        cout<<"Book price:";
        cin>>price;
    }
    void purchase()
    {
        cout<<"Number of books:";
        cin>>n;
    }
    void totalprice()
    {
        // cout<<"\nBook number:"<<bookno;
        // cout<<"\nBook title:"<<booktitle;
        // cout<<"\nBook price:"<<price;

         cout<<"\nTotal price:"<<totalcost(n);
    }
};
float Book:: totalcost(int n)
{
    return n*price;
}
int main()
{
    class Book bo;
    bo.input();
    bo.purchase();
    bo.totalprice();
    return 0;
}