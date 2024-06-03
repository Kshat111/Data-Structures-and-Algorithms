#include<iostream>
using namespace std;
int linSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[10]={112,10,98,76,56,45,76,88,1,-23};
    int n=sizeof(arr)/sizeof(arr[1]);
    int key;
    cout<<"Enter key: ";
    cin>>key;
    int a=linSearch(arr,n,key);
    cout<<"Index of "<<key<<" is: "<<a;
}