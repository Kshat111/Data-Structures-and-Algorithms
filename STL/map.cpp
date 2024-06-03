#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;
    //one way to insert keys-values
    m[1]="Akshat";
    m[2]="Nikko";
    m[3]="Forever";
    m[12]="Eternity";
    //another way to insert
    m.insert({5,"Unconditional"});
    cout<<"Before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"Is -13 present? -> "<<m.count(-13)<<endl;
    cout<<"After erase: "<<endl;
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl<<endl;
    auto it=m.find(15);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}