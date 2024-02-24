#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    //Base case
    if(size==0 || size==1)
    return true;

    //processing
    if(arr[0]>arr[1])
    return false;

    //Reccursive relation
    else{
        bool remaingPart = isSorted(arr + 1, size - 1);
        return remaingPart;
    }
}

int main()
{
    int arr[3]={3,4,5};
    int size = 3;
    bool ans = isSorted(arr,3);
    if(ans==true)
    cout<<"Array is sorted"<<endl;
    else{
        cout<<"Array is not sorted"<<endl;
    }
   return 0;
}