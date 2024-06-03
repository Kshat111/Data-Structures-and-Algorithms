//Dutch National Flag algo to sort an array having only three types of elements
#include<iostream>
using namespace std;
void DNFSort(int *arr,int n){
    int low=0;   //used as a pointer to indicate the start of 1s
    int curr=0;  //when this becomes equal to high then the array is sorted
    int high=n-1;//used as a pointer to mark the start of 2s
    while(curr<=high){
        if(arr[curr]==0){
            swap(arr[curr],arr[low]);
            low++;
            curr++;
        }
        else if(arr[curr]==2){
            swap(arr[curr],arr[high]);
            high--;
        }
        else{
            curr++;
        }
    }
}
void printArr(int *arr,int n){
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter only 0s, 1s and 2s: ";
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    DNFSort(arr,n);
    cout<<"Sorted array: ";
    printArr(arr,n);
    return 0;
}