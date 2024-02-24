#include<iostream>
using namespace std;

class Human {
    public:
      int height;
      int age;
      int weight;

    public:
      int getAge(){
        return this->age;
      }  

      void setWeight(int w){
        this->weight = w;
      }
};


class Male: public Human{

    public:
       string color;

    void sleep(){
        cout<<"Male sleeping "<<endl;
    }   
};
int main()
{

    Male object1;

    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.color<<endl;
    cout<<object1.height<<endl;
    object1.sleep();

    object1.age = 19;
    object1.weight = 60;
    object1.color = "white";
    object1.height = 67;

    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.color<<endl;
    cout<<object1.height<<endl;
    object1.sleep();
   return 0;
}