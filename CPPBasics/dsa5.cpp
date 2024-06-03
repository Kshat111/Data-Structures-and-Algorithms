//counting 1's and 0's in binary form of a number
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count1=0;// to count 1's
    int count0=0;// to count 0's
    while(n!=0){
        if(n&1){
            count1++;
        }
        else{
            count0++;
        }
        n=n>>1;
    }
    cout<<count1<<endl;
    cout<<count0;
} 