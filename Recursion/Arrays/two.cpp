#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int ans=factorial(n);
    cout<<"Factorial of "<<n<<" is: "<<ans<<endl;
}