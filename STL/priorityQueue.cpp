#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heap
    priority_queue<int>maxh;
    maxh.push(12);
    maxh.push(84);
    maxh.push(-130);
    maxh.push(234);
    maxh.push(-27);
    int n=maxh.size();
    cout<<"Size of max heap: "<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<maxh.top()<<" ";
        maxh.pop();
    }
    //output will be in decreasing order
    //max heap has this functionality that largest element is fetched out first
    cout<<endl;
    cout<<"Size of max heap after pop: "<<n<<endl;
    cout<<"Empty or not: "<<maxh.empty()<<endl;

    //min heap
    priority_queue<int,vector<int>,greater<int>>minh;
    minh.push(0);
    minh.push(53);
    minh.push(78);
    minh.push(-4);
    minh.push(53);
    int m=minh.size();
    cout<<"Size of min heap: "<<m<<endl;
    for(int i=0;i<m;i++){
        cout<<minh.top()<<" ";
        minh.pop();
    }
    //output will be in increasing order
    //max heap has this functionality that smallest element is fetched out first
    cout<<endl;
    cout<<"Size of min heap after pop: "<<m<<endl;
    cout<<"Empty or not: "<<minh.empty();

}