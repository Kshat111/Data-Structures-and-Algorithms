#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        //shift elements to right
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int main(){
    int arr[6]={10,1,7,6,14,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertionSort(arr,n);
    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}