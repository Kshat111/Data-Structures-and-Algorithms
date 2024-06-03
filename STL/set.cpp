#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(4);
    s.insert(4);
    s.insert(4);    
    s.insert(5);
    s.insert(5);
    s.insert(8);
    s.insert(9);
    s.insert(9);
    for(auto i:s){   // 'auto' automatically indentifies the variable type 
        cout<<i<<" ";
    }
    cout<<endl;
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Is -69 present in the set or not? -> "<<s.count(-69)<<endl;//.count() finds whether it is present or not
    set<int>::iterator itr=s.find(5);
    for(auto itt=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}