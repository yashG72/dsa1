#include<iostream>
using namespace std;
int main()
{
    int arr[20]= {1,5,3,4};

    cout<<"Address of 1st block is "<<arr<<endl;
    cout<<"Address of 1st block is "<<&arr[0]<<endl;
    cout<<"Address of 2st block is "<<&arr[1]<<endl;
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*arr+2<<endl;
    cout<<*(arr+1)<<endl;
  //  cout<<*arr[1]<<endl;
  //  cout<<*arr[2]<<endl;
  //  cout<<*arr[2]<<endl;

  int *p=&arr[0];
  cout<<p<<endl;
  cout<<*p<<endl;
  cout<<&p<<endl;
  cout<<arr<<endl;
  cout<<&arr[0]<<endl;
  cout<<&arr[1]<<endl;

   return 0;
}