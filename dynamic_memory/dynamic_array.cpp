#include<iostream>
using namespace std;

int getSum(int *arr,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;

    //Initializing the array memory in dynamic location i.e. heap memory
    int*yash = new int[n]; // Yha pe ek yash naam ka pointer array create ho gya static 
    //memory m jo heap memory ke array ko point kr rha h and phir apne uss pointer ke 
    // through access kr skte h heap memory ke array ko

    //Taking input in array
    for(int i=0;i<n;i++){
        cin>>yash[i];
    }
   int ans = getSum(yash,n);
   cout<<"The answer is "<<ans<<endl;
   return 0;
}