#include<iostream>
using namespace std;
int main()
{
    int num = 5;
    int *ptr = &num;

    int a = ++num;
    int b = ++*ptr;

    cout<<a<<endl;
    cout<<b<<endl;

   return 0;
}