#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int term=fibo(n-1)+fibo(n-2);
    return term;
}
void printFibo(int a, int b, int n){
    cout<<a<<" ";
    if(n>1){
        printFibo(b,b+a,n-1);
    }
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int ans=fibo(n);
    cout<<"nth term is: "<<ans<<endl;
    cout<<"First "<<n<<" terms are: ";
    printFibo(0,1,n);
}