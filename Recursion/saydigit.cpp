#include<iostream>
using namespace std;

int saydigit(int n,string arr[]){
    //base case
    if(n==0)
     return 0;

    //processing
    int digit = n%10;
    n = n/10;

    //reccursive relation
    saydigit(n, arr) ;

    cout<<arr[digit]<<" ";

}
int main()
{
    int n;
    cin>>n;
    string arr[10] = {"zero","one","two","three","four",
                     "five","six","seven","eight","nine"};

    saydigit(n,arr);  
   

   return 0;
}