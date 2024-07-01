#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Value of a:";
    cin >> a;
    cout << "Value of b:";
    cin >> b;
    cout << "Value of c:";
    cin >> c;
    if (a > b && a > c)
    {
        cout << "a is largest";
    }
    else if (b > c)
    {
        cout << "b is largest";
    }
    else
    {
        cout << "c is largest";
    }

    return 0;
}
