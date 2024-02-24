#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cin>>n;

    int i = 1;

    while(i<=n){
        int start1= n-i+1;
        int count = 1;
        while(start1){
            cout<<count;
            count++;
            start1--;
        }

        int star1 = i - 1;
        while(star1){
            cout<<"*";
            star1--;
        }

       int star2 = i - 1;
        while(star2){
            cout<<"*";
            star2--;
        }

         int start2= n-i+1;
        int count2 = n-i+1;
        while(start2){
            cout<<count2;
            count2--;
            start2--;
        }

        cout<<endl;
        i++;
    
    }
   return 0;
}