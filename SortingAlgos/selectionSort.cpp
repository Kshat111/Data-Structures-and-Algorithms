#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<=n-1;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}
int main(){
    int arr[5]={64,25,12,11,22};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selectionSort(arr,n);
    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


}