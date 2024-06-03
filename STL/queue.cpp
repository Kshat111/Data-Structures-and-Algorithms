#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>q;
    q.push("Akshat");// lowermost element
    q.push("will");
    q.push("remain");
    q.push("single");
    q.push("his");
    q.push("whole");
    q.push("life");// topmost element
    cout<<"First element: "<<q.front()<<endl;
    q.pop();
    cout<<"First element after pop: "<<q.front()<<endl;
    cout<<"Size of the queue: "<<q.size()<<endl;
}