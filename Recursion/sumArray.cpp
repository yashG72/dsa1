#include<iostream>
using namespace std;

int sumArray(int arr[], int size){
     //Base case
     if(size==0 || size==1)
     return arr[0];

    

     //Reccursive relation
     int newArray = arr[0]+sumArray(arr + 1,size - 1);
     return newArray;
}
int main()
{

    int arr[5]={3,4,5,6,3};
    int size = 5;
    int ans = sumArray(arr,5);
    cout<<ans<<endl;
   return 0;
}