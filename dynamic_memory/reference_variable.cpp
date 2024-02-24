#include<iostream>
using namespace std;
int main()
{
    int i = 4;

    //Creating a reference variable

    int &j = i;

    cout<<j<<endl;
    cout<<i<<endl;
    i++;
    cout<<j<<endl;
    j++;
    cout<<j<<endl;
   return 0;
}