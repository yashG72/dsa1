#include<iostream>
using namespace std;

bool checkPalindrome(string str,int i, int j){
    //Base case
    if(j<i)
    return true;

    if(str[i]!=str[j])
    return false;
    else{
        return checkPalindrome(str,i+1,j-1);
    }



}
int main()
{
    string name = "naman";
    bool ans = checkPalindrome(name,0,name.length()-1);
    if(ans==true){
        cout<<"It is palindrome"<<endl;
    }
    else{
        cout<<"It is not a palindrome"<<endl;
    }

   return 0;
}