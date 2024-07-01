#include<iostream>
using namespace std;
int main()
{
    int k=0;
    char name[50];    
    char name1[50];
    char name2[50];
    gets(name);
    gets(name1);
    for(int i=0;name[i]!='\0';i++,k++)
    {
        name2[k]=name[i];
    }
    for(int j=0;name1[j]!='\0';j++,k++)
    {
        name2[k]=name1[j];
    }
    name2[k]='\0';
    puts(name2);
    
    return 0;
}