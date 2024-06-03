#include<iostream>
using namespace std;
int exponent(int a, int b){
    int ans=1;
    for(int i=0;i<b/2;i++){
        ans=ans*a;
    }
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