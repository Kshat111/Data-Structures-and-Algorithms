#include<iostream>
using namespace std;
int fibo(int n){
    if(n<=0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int a=0;
    int b=1;
    for(int i=2;i<n;i++){
        int add=a+b;
        a=b;
        b=add;
    }
    return b;
}
void printFibo(int n){
    int a=0;
    int b=1;
    for(int i=0;i<n-1;i++){
    if(i==0){
        cout<<a;
    }
    if(i==1){
        cout<<" "<<b;
    }
    else{
        int add=a+b;
        cout<<" "<<add;
        a=b;
        b=add;
    }
    }
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int ans=fibo(n);
    cout<<n<<"th term is: "<<ans<<endl;
    cout<<"First "<<n<<" terms are: ";
    printFibo(n);
}