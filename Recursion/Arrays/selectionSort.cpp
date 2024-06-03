#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    //base case
    if(n==0 || n==1){
        return;
    }
    for(int i=1;i<=n-1;i++){
        if(arr[i]<arr[0]){
            swap(arr[i],arr[0]);
        }
    }
    selectionSort(arr+1,n-1);
}
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int* arr=new int[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Sorted order is: ";
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}