#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string name = "babar";
    stack<char> st;

    for(int i=0;i<name.length();i++){
        char ch = name[i];
        st.push(ch);
    }
     
    string ans = "";

    while(!st.empty()){
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }

    cout<<"The answer is  "<<ans<<endl;
   return 0;
}