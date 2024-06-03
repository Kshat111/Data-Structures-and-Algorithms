#include<iostream>
using namespace std;
int main(){
    string s="203";
    string t="504";
    int ans, ans1, ans2;
    for(int i=0;i<s.length();++i){
        ans1=s[i]-'0';
    }
    for(int j=0;j<t.length();++j){
        ans2=s[j]-'0';
    }
    cout<<ans1+ans2;
    return 0;
}