#include<iostream>
using namespace std;

void print(int *p){

    cout << *p << endl;
    cout << p << endl;
    cout <<"address of p of void block"<< &p << endl; //yeh wala p alag hai main block se

}

int main(){
   int val = 5;

   int *p = &val;

   print(p);
   cout<<*p<<endl;
   cout<<p<<endl;
   cout<<"address of p of main block "<<&p<<endl;

   return 0;
}