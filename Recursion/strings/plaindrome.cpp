#include<iostream>
using namespace std;
bool isPalindrome(string& str,int s,int e){
    s=0;
    e=str.length()-1;
    //base case
    if(str[s]==str[e]){
        return true;
    }
    if(str[s]!=str[e]){
        return false;
    }
    int remPart=isPalindrome(str,s+1,e-1);
    return remPart;
}
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    cout<<endl;
    if(isPalindrome(str,0,str.length()-1)){
        cout<<"Entered string is a palindrome"<<endl;
    }
    else{
        cout<<"Entered string is not a palindrome"<<endl;
    }
}