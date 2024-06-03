#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void merge(int arr[], int s, int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *arr1= new int[len1];
    int *arr2= new int[len2];

    // insert elements into arr1 and arr2
    int mainIndex=s;
    for(int i=0;i<len1;++i){
        arr1[i]=arr[mainIndex++];
    }

    mainIndex=mid+1;
    for(int i=0;i<len2;++i){
        arr2[i]=arr[mainIndex++];
    }

    // merge two sorted array
    int i=0;
    int j=0;
    int k=s;
    while(i<len1 && j<len2){
        if(arr1[i]<arr2[j]){
            arr[k++]=arr1[i++];
        }
        else{
            arr[k++]=arr2[j++];
        }
    }
    while(i<len1){
        arr[k++]=arr1[i++];
    }
    while(j<len2){
        arr[k++]=arr2[j++];
    }
    delete[] arr1;
    delete[] arr2;
}

void mergeSort(int arr[], int s, int e){
    //base case
    
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr, mid+1,e);
    merge(arr,s,e);
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
    mergeSort(arr,0, n-1);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }    
    delete[] arr;
    return 0;
}