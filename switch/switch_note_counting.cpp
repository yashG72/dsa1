#include<iostream>
using namespace std;
int main()
{
   cout<<"Enter the amount"<<endl;

    int money;
    cin>>money;

   cout<<"Enter the note"<<endl;
    int note;
    cin>>note;

    switch(note){
        case 100: cout<<money/100<<endl;
        break;
        case 50: cout<<money/50<<endl;
        break;
        case 20: cout<<money/20<<endl;
        break;
        case 10: cout<<money/10<<endl;
        break;
        default: cout<<"This note is not valid"<<endl;
    }
   return 0;
}