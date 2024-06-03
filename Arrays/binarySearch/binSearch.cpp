#include<iostream>
using namespace std;
int binSearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
}
int main(){
    int arr[10]={112,100,98,76,56,45,34,30,29,9};
    int n=sizeof(arr)/sizeof(arr[1]);
    int key;
    cout<<"Enter key: ";
    cin>>key;
    int a=binSearch(arr,n,key);
    cout<<"Index of "<<key<<" is: "<<a;
}