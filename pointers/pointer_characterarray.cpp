#include<iostream>
using namespace std;
int main()
{
    int arr[5]={3,4,5,6,7};

    char ch[6]= "abcde";

    cout<<arr<<endl;
    cout<<ch<<endl;

    char *c = &ch[0];
    
    cout<<c<<endl;  //prints entire string rather than adreess of 1st block
    cout<<*c<<endl;
    cout<<&c<<endl;
    cout<<&c[0]<<endl;
    cout<<&c[1]<<endl;
   return 0;
}