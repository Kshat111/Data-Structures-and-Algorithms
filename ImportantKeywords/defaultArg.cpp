#include<iostream>
using namespace std;
void printArr(int* arr,int n,int start=0){
    //by default start will take 0 as its value (if not supplied)
    for(int i=start;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    printArr(arr,size,3);    
}