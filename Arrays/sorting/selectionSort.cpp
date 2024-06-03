#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int min_index=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
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
    selectionSort(arr,n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}