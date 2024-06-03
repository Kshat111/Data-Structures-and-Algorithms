#include<iostream>
#include<stack>
using namespace std;
bool isValid(string s){
    int n=s.length();
    stack<char> stack;
    bool ans=true;
    for(int i=0;i<n;++i){
        if(s[i]=='(' or s[i]=='[' or s[i]=='{'){
            stack.push(s[i]); 
        }
        if(s[i]==')'){
            if(stack.top()=='('){
                stack.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        if(s[i]=='}'){
            if(stack.top()=='{'){
                stack.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        if(s[i]==']'){
            if(stack.top()=='['){
                stack.pop();
            }
            else{
                ans=false;
                break;
            }
        }
    }
    return ans;
}
int main(){
    string str;
    cout<<"Input a string: ";
    getline(cin,str);
    if(isValid(str)){
        cout<<"Valid String";
    }
    else{
        cout<<"Invalid String";
    }
    return 0;
}