#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("Akshat");// lowermost element
    s.push("will");
    s.push("remain");
    s.push("single");
    s.push("his");
    s.push("whole");
    s.push("life");// topmost element
    cout<<"First element: "<<s.top()<<endl;//front() not used (front will imply a line of people but we can see a data structure to be a stack if we view it from the top)
    s.pop();//removes topmost element
    cout<<"First element after pop: "<<s.top()<<endl;
    cout<<"Size of stack: "<<s.size()<<endl;
    cout<<"Empty or not: "<<s.empty()<<endl;
}