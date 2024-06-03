#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot=arr[low];
    int count=0;
    for(int i=low+1;i<=high;++i){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex=low+count;
    swap(arr[pivotIndex], arr[low]);
    int i=low;
    int j=high;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++], arr[j--]);
            // low++;
            // high--;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int low, int high){
    if(low>=high){
        return;
    }
        int pivotIndex= partition(arr, low, high);
        quickSort(arr, low, pivotIndex-1);
        quickSort(arr, pivotIndex+1, high);
    
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
    quickSort(arr,0, n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}