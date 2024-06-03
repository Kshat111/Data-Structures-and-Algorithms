#include<iostream>
using namespace std;
int getSum(int* arr,int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int remainingPart=getSum(arr+1,n-1);
    int sum=arr[0]+remainingPart;
    return sum;  
}
int main(){
    int n;
    cout<<"Enter number of elements you want to have: ";
    cin>>n;
    int* arr=new int[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=getSum(arr,n);
    cout<<"Sum is: "<<ans;
}