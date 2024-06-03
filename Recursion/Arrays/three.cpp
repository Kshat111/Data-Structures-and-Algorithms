#include<iostream>
using namespace std;
void counting(int n){
    if(n==0){
        return;
    }
    
    counting(n-1);
    cout<<n<<" ";
    //head recursion
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Counting upto "<<n<<" is: ";
    counting(n);
}