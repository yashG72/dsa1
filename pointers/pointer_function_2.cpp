#include<iostream>
using namespace std;

void update(int *p){
    
    p = p+1;

}

void value(int *p){
    *p = *p + 1;
}

int main()
{
    int val = 5;
    int *p = &val;

    cout<<"Before passing "<<p<<endl;
    update(p);
    cout<<"After passing "<<p<<endl;
    //value does not change
    
    cout<<"Before passing the value "<<*p<<endl;
    value(p);
    cout<<"After passing the value "<<*p<<endl;
    //value change, this is known as call by value

   return 0;
}