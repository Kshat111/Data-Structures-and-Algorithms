#include<iostream>
using namespace std;
void bubbleSort(int* arr,int n){
    if(n==0 || n==1){
        return;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,n-1);//size got reduced by 1 because one largest element is getting placed... so we need not operate on it
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
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}