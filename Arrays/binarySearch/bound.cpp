#include<iostream>
using namespace std;
int firstOccr(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int temp=-1;
    while(s<=e){
        if(key==arr[mid]){
            temp=mid;
            e=mid-1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return temp;
}
int lastOccr(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int temp=-1;
    while(s<=e){
        if(key==arr[mid]){
            temp=mid;
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return temp;
}
int main(){
    int arr[10]={1,1,1,2,3,3,5,6,17,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter Key: ";
    cin>>key;
    int a=firstOccr(arr,n,key);
    int b=lastOccr(arr,n,key);
    cout<<"First occurence is at index: "<<a<<endl;
    cout<<"Last occurence is at index: "<<b;

    return 0;
}