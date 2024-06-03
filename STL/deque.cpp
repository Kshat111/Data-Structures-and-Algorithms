#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>deq;
    deq.push_back(2);
    deq.push_front(1);
    cout<<"Original: "<<endl;
    for(int i:deq){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"First element: "<<deq.front()<<endl;
    cout<<"Last element: "<<deq.back()<<endl;
    cout<<"Empty or not: "<<deq.empty()<<endl;
    cout<<"Size before erasing: "<<deq.size()<<endl;
    deq.erase(deq.begin(),deq.begin()+1);       //pops first element (pops according to the range given)
    cout<<"Size after erasing: "<<deq.size()<<endl;
    for(int i: deq){
        cout<<i<<" ";
    }
}