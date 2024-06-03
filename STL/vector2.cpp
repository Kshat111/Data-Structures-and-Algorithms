//initialising all elements of a vector with some non-zero value
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5,1);
    cout<<"Print v: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;
    vector<int>vec(v); //copying elements into a new vector
    cout<<"Print vec: "<<endl;
    for(int i:vec){
        cout<<i<<" ";
    }
}