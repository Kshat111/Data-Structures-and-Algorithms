#include<iostream>
using namespace std;
inline int getMax(int& a, int& b){
    return (a>b)?a:b;
}
int main(){
    int a;
    int b;
    cout<<"Enter two numbers to compare: ";
    cin>>a>>b;
    int ans;
    cout<<"Before updation, max is: ";
    ans=getMax(a,b);
    cout<<ans<<endl;
    a=a+4;
    b=b+3;
    cout<<"After updation, max is: ";
    ans=getMax(a,b);
    cout<<ans<<endl;
}