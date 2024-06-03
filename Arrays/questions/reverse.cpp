#include<iostream>
using namespace std;
void reverseArray(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original array: ";
    printArray(arr,n);
    reverseArray(arr,n);
    cout<<endl;
    cout<<"Reversed array: ";
    printArray(arr,n);
    return 0;
}