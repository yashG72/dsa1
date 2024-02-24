#include<iostream>
using namespace std;
int main()
{
    int num = 5;
//Storing the address in block p of num
    int *p = &num;

    cout<<num<<endl; //printing the value of num
    cout<<*p<<endl;  //printing the value of num
    cout<<&num<<endl;//printing the address
    cout<<p<<endl;   //printing the address

   return 0;
}