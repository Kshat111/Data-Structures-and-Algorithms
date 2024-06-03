#include<iostream>
using namespace std;
bool isSorted(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            return 1;
        }
    }
    return 0;
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