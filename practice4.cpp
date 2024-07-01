#include <iostream>
using namespace std;
int main()
{
    char a = 'A';
    for (a = 'A'; a <= 'Z'; a++)
    {
        cout << a<<":"<<int(a)<<"\t";
    }
    return 0;
    
}