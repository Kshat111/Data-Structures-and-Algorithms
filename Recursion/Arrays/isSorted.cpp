#include<iostream>
using namespace std;
bool isSorted(int *arr,int n){
    /*
    bool ascending=true;
    bool descending=true;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            descending=false;
        }
        if(arr[i]>arr[i+1]){
            ascending=false;
        }
    }
    return ascending || descending;*/
    //using recursion
    //base case
    if(n<=1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return isSorted(arr+1,n-1);
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
    if(isSorted(arr,n)){
        cout<<"The entered array is sorted";
    }
    else{
        cout<<"The entered array is not sorted";
    }
}