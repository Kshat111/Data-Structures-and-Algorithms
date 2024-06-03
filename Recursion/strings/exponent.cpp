#include<iostream>
using namespace std;
int exponent(int a, int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans=exponent(a,b/2);
    if(b&1){
        return a*ans*ans;
    }
    else{
        return ans*ans;
    }
}
int main(){
    int a;
    int b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    int ans=exponent(a,b);
    cout<<endl<<"a^b is: "<<ans;
}