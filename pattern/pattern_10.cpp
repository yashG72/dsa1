#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i=1;

    while(i<=n){
    int stars=n-i+1;
    while(stars){
        cout<<"#";
        stars--;
    }
    cout<<endl;
    i++;
    }
   return 0;
}