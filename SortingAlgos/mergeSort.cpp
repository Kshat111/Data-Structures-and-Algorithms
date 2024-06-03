#include<iostream>
using namespace std;
void mergeTwoSortedArrays(int* arr,int s,int e){
    //creating two new arrays
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *arr1=new int[len1];
    int *arr2=new int[len2];
    //copying the values from original array to these newly created arrays
    int k=s;
    for(int i=0;i<len1;i++){
        arr1[i]=arr[k++];
    }
    for(int i=0;i<len2;i++){
        arr2[i]=arr[k++];
    }
    //merging
    int index1=0;
    int index2=0;
    k=s;
    while(index1<len1 && index2<len2){
        if(arr1[index1]<arr2[index2]){
            arr[k++]=arr1[index1++];
        }
        else{
            arr[k++]=arr2[index2++];
        }
    }
    while(index1<len1){
        arr[k++]=arr1[index1++];
    }
    while(index2<len2){
        arr[k++]=arr2[index2++];
    }
    delete []arr1;
    delete []arr2;
}
void mergeSort(int *arr,int s, int e){
    int mid=s+(e-s)/2;
    //base case
    if(s>=e){
        return;
    }
    //sort left part
    mergeSort(arr,s,mid);
    //sort right part
    mergeSort(arr,mid+1,e);
    //merge both arrays
    mergeTwoSortedArrays(arr,s,e);
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
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}