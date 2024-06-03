#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0; i<n-1;i++){
        bool swapped=false;
        //since largest element is getting placed so we dont need to swap it... that's why loop for j is executed till n-1-i
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
        // swapped wali bakchodi isliye liye kri h jisse unnecessary swapping rok skein... jis round me swap krne k baad kuch nya nhi mila
    }
}
int main(){
    int arr[6]={10,1,7,6,14,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubbleSort(arr,n);
    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}