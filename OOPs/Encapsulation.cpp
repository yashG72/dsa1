#include<iostream>
using namespace std;


class Student {
    private:
        string name;
        int age;
        int height;

    public:
        int getAge(int a){
             this->age = a;
             cout<<a<<endl;
        }
};
int main()
{
     Student first;
     first.getAge(47);

   return 0;
}