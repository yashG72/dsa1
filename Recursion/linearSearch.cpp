#include<iostream>
using namespace std;

bool linearSearch(int arr[],int key,int size){
      //Base case
      if(size==0  )
      return false;

     


      if(arr[0]==key){
        return true;
      }
     

      bool newArray =  linearSearch(arr + 1,key,size - 1);
      return newArray;



}


int main()
{
    int array[5]={3,4,5,6,7};
    int key = 9;
    int size = 5;
    bool ans = linearSearch(array,9,5);
    if(ans==true){
        cout<<"Key is found"<<endl;
    }
    else{
        cout<<"Key is not found"<<endl;
    }
   return 0;
}