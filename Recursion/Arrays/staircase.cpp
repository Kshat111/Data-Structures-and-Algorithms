#include<iostream>
using namespace std;
int numOfWays(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    //solve only one case
    //we can arrive on nth stair from (n-1)th or(n-2)th stair=ko9
    int ans=numOfWays(n-1)+numOfWays(n-2);
    return ans;
}
int main(){
    int n;
    cout<<"What's your staircase number: ";
    cin>>n;
    cout<<"Total number of way to arrive at "<<n<<"th staircase with only 1 or 2 jumps is/are: "<<numOfWays(n);
}