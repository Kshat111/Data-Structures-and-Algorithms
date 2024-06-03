#include<iostream>
using namespace std;
bool binarySearch(int *arr,int key,int s,int e){
    //base case
    //element not found
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    //element found(base case)
    if(arr[mid]==key){
        return true;
    }
    //recursive call
    if(arr[mid]>key){
        binarySearch(arr,key,s,mid-1);
    }
    else{
        binarySearch(arr,key,mid+1,e);
    }
}
int main(){
    int arr[10]={2,4,6,8,10,12,14,16,18,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the value you want to search for: ";
    cin>>key;
    if(binarySearch(arr,key,0,10)){
        cout<<key<<" is present";
    }
    else{
        cout<<key<<" is not present";
    }

}