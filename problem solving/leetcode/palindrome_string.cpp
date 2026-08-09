#include<iostream>
using namespace std;
int main()
{
    string str;
    string reverse_str = "";
    cin>>str;

    for(int i = str.length()-1; i >= 0; i--){
        reverse_str += str[i]; 
    }
    if(str == reverse_str){
        cout<<"The is a palindrome."<<endl;
    }else{
        cout<<"The is not a palindrome."<<endl;
    }
    return 0;
}