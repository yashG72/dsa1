#include<iostream>
using namespace std;
int main()
{
    char b;
    cin>>b;
    if(b>='a' && b<='z'){
        cout<<"This is lowercase"<<endl;
    }
    else if(b>='A' && b<='Z'){
         cout<<"This is uppercase"<<endl;
    }
    else if(b>='0' && b<='9'){
         cout<<"This is numeric"<<endl;
    }

    
   return 0;
}