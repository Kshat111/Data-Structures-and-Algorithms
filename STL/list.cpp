#include<iostream>
#include<list>//implmented using doubly linked list
using namespace std;
int main(){
    list<int>l(5,69); //initialise 5 elements with 69
    cout<<"Printing the original list: ";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.push_back(3);
    l.push_front(7);
    cout<<"Modification 1: ";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.pop_back();
    l.pop_front();
    cout<<"Modification 2: ";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"Modification 3: ";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Final size of the list: "<<l.size();
}