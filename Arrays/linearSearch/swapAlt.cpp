#include<iostream>
using namespace std;
void swapAlt(int arr[],int n){
    int s=0;
    int e=1;
    while(s<n &&e<n){
        swap(arr[s],arr[e]);
        s=s+2;
        e=e+2;
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[9]={1,5,8,3,6,4,0,3,8};
    int n=9;
    swapAlt(arr,9);
    print(arr,9);
}