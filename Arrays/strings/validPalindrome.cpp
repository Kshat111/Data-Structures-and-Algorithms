#include<iostream>
#include<string>
using namespace std;
bool valid(char ch){
    if((ch>='a'&& ch<='z') || (ch>='A'&& ch<='Z') || (ch>='0'&& ch<='9')){
        return 1;
    }
    return 0;
}
char toLowerCase(char ch){
    if((ch>='a'&& ch<='z') || (ch>='A'&& ch<='Z') || (ch>='0'&& ch<='9')){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool checkPlaindrome(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]==s[s.length()-1-i]){
            return true;
        }
    }
    return false;
}
bool isPalindrome(string s){
    string temp="";
    for(int i=0;i<s.length();i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }
    for(int j=0;j<temp.length();j++){
        temp[j]=toLowerCase(temp[j]);
    }
    return checkPlaindrome(temp);
}
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    if(isPalindrome(s)){
        cout<<"This is a valid palindrome";
    }
    else{
        cout<<"This is not a valid palindrome";
    }
}