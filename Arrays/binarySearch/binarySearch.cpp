#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        
        if(key==arr[mid]){
            return mid;
        }
        if(key<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    int key;
    cout<<"Enter key to search for: ";
    cin>>key;
    int arr[5]={4,8,16,22,34};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=binarySearch(arr,n,key);
    cout<<"Index of "<<key<<" is: "<<ans;
    
}