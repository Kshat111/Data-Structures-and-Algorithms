#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
int power(int x,int n){
    //bc
    if(n==0){
        return 1;
    }
    //rc
    long long int remPart=power(x,n/2);
    long long int ans=remPart*remPart;
    if(n&1){
        ans=x*remPart;
    }
    return ans;
}

int main() {
    //Write your code here
    int x,n;
    cin>>x>>n;
    long long int ans=power(x,n);
    cout<<ans;
    return 0;
}