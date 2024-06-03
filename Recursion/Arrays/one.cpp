//recursion is bascically PMI
//calculting power of 2
#include<iostream>
using namespace std;
int powerOf2(int n){
    //base case
    if(n==0){
        return 1;
    }
    else{
        return 2*powerOf2(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int ans=powerOf2(n);
    cout<<"2^"<<n<<" is: "<<ans<<endl;

}