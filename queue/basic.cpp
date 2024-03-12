#include<iostream>
#include<queue>


using namespace std;
int main()
{
   queue<int> q;

   q.push(7);
    cout<<"The front of queue is "<<q.front()<<endl;
   q.push(8);
    cout<<"The front of queue is "<<q.front()<<endl;
   q.push(9);

   cout<<"The front of queue is "<<q.front()<<endl;

   q.pop();
    cout<<"The front of queue is "<<q.front()<<endl;

   return 0;
}