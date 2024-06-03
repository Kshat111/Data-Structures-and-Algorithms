#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(6);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);
    cout<<"Is 6 present? -> "<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"Lower bound index: "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Upper bound index: "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    ////////////////////////////////
    int a=3;
    int b=5;
    cout<<"Max of a and b: "<<max(a,b)<<endl;
    cout<<"Min of a and b: "<<min(a,b)<<endl;
    ////////////////////////////////
    swap(a,b);
    cout<<"New value of a: "<<a<<endl;
    ////////////////////////////////
    string s="anushka";
    reverse(s.begin(),s.end());
    cout<<"New string: "<<s<<endl;
    ////////////////////////////////
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"Vector after rotation: ";
    for(int i:v){
        cout<<i<<" ";
    }
}   