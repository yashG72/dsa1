#include<iostream>
using namespace std;

class Stack{
    public:
     //properties
     int size;
     int *arr;
     int top;


     //behaviour
     Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
     }

     void push(int element){
        if(size - top > 1){
            top++;
            arr[top]=element;

        }
        else{
            cout<<"Stack is overflow"<<endl;

        }

     }

        void pop(){
            if(top>=0){
                top--;
            }
            else{
                cout<<"Stack is underflow"<<endl;

            }
        }

        int peek(){
            if(top>=0){
                cout<<"The top element is "<<arr[top]<<endl;
            }
            else{
                cout<<"Stack is empty"<<endl;
            }
        }    

        bool isempty(){
            if (top==-1){
                return true;
            }
            else{
                return false;
            }
        }


        
     
};




int main()
{
    Stack st(5);
    st.push(5);
    st.push(6);
    st.peek();
   return 0;
}