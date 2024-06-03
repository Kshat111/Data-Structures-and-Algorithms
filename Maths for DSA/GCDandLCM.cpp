#include<iostream>
#include<vector>
using namespace std;
int GCD(int n,int m){
    //Euclid's algorithm
    if(n==0){
        return m;
     }
    if(m==0){
        return n;
     }
     while(n!=m){
        if(n>m){
            n=n-m;
        }
        if(m>n){
            m=m-n;
        }
     }
     return n; 
} 
int LCM(int n,int m){
    int lcm=(n*m)/GCD(n,m);
    return lcm;
}
int main(){
    int n;
    int m;
    cout<<"Enter two numbers: ";
    cin>>n>>m;
    int ans=GCD(n,m);
    cout<<"GCD of "<<n<<" and "<<m<<" is "<<ans<<endl;
    int anss=LCM(n,m);
    cout<<"LCM of "<<n<<" and "<<m<<" is "<<anss;
}