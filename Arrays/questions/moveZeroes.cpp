//Pheli baar khud se question kiya!!!
#include<iostream>
using namespace std;
void moveZeroes(int arr[], int n, int arr1[]) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr1[k++] = arr[i];
        }
    }
    while (k < n) {
        arr1[k++] = 0;
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[8]={1,4,0,0,9,0,0,5};
    int arr1[8]={0};
    cout<<"After moving zeroes to the right: ";
    moveZeroes(arr,8,arr1);
    printArray(arr1,8);
}