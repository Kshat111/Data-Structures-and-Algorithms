#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void insertionSort(int arr[], int n){
    for(int i=0;i<n;++i){
        int j=i;
        while(j>=0 && arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            j--;
        }
    }
}
int main() {
    int n;
     cin>>n;
    int * arr= new int[n];
   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Unsorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertionSort(arr,n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}