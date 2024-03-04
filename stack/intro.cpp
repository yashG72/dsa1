#include<iostream>
#include<stack>
using namespace std;
int main()
{
    //Creation of stack
    stack<int> s;

    //push operation
    s.push(4);
    s.push(6);

    //pop operation
    s.pop();

    cout << "The top element is  "<< s.top()<<endl;

   return 0;
}