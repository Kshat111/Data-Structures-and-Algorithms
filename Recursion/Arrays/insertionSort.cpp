#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
    if(n<=1){
        return;
    }
    insertionSort(arr,n-1);    
    int temp=arr[n-1];
    int j=n-2;
    while(j>=0 && arr[j]>temp){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
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
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}