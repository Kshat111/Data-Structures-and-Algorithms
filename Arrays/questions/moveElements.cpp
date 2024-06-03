#include<iostream>
using namespace std;
void moveElements(int arr[],int k){
    int temp[6]={0};
    int n=sizeof(temp)/sizeof(temp[0]);
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={3,6,0,-7,5,45};
    int k;
    cout<<"Enter k: ";
    cin>>k;
    cout<<"Original array: ";
    printArray(arr,6);
    cout<<endl;
    moveElements(arr,6);
    cout<<"Modified array: ";
    printArray(arr,6);
}