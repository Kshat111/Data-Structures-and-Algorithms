#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    cout<<"Before Capacity= "<<v.capacity()<<endl;
    cout<<"Before Size= "<<v.size()<<endl;
    for(int i=1;i<=5;i++){
        v.push_back(i);
    }
    cout<<"After pushback Capacity= "<<v.capacity()<<endl;// gets doubled and original one dumped
    cout<<"After pushback Size= "<<v.size()<<endl;
    cout<<"Element at index=3: "<<v.at(3);
    cout<<"First element: "<<v.front()<<endl;
    cout<<"Last element: "<<v.back()<<endl;
    //accessing in a vector
    for(int i:v){               
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    v.clear();//this reduces size to 0, capacity remain intact
    cout<<"After clear Capacity= "<<v.capacity()<<endl;
    cout<<"After clear Size= "<<v.size()<<endl;
}