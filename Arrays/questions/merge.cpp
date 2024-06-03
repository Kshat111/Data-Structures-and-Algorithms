#include<iostream>
using namespace std;
void mergeTwoSortedArrays(int arr[],int brr[],int n,int m,int crr[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(arr[i]<brr[j]){
            crr[k++]=arr[i++];
        }
        else{
            crr[k++]=brr[j++];
        }
    }
    //copying remaining values of array 1
    while(i<n){
        crr[k++]=arr[i++];
    }
    //copying remaining values of array 2
    while(j<m){
        crr[k++]=brr[j++];
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={1,2,3,4,5,5};
    int brr[7]={3,6,8,90,91,100,101};
    int crr[13]={0};
    cout<<"First original array: ";
    printArray(arr,6);
    cout<<endl;
    cout<<"Second original array: ";
    printArray(brr,7);
    cout<<endl;
    mergeTwoSortedArrays(arr,brr,6,7,crr);
    cout<<"After merging both arrays: ";
    printArray(crr,13);
}