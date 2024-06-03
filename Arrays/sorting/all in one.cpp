#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

/////////////////////////////////////////////////////////

void merge(int arr[],int low, int high){

}
void mergeSort(int arr[], int low, int high){

}

/////////////////////////////////////////////////////////

int partition(int arr[], int low, int high){

}
void quickSort(int arr[], int low, int high){

}

////////////////////////////////////////////////////////

void bubbleSort(int arr[], int n){

}

////////////////////////////////////////////////////////

void insertionSort(int arr[], int n){

}

////////////////////////////////////////////////////////

void selectionSort(int arr[], int n){

}

///////////////////////////////////////////////////////
int main() {
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int * arr= new int[n];
    
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Unsorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    mergeSort(arr,0, n-1);
    cout<<"Sorted array after using merge sort: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }    
    cout<<endl;


    quickSort(arr,0, n);
    cout<<"Sorted array after using quick sort: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }  
    cout<<endl;


    bubbleSort(arr, n);
    cout<<"Sorted array after using bubble sort: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }  
    cout<<endl;


    insertionSort(arr, n);
    cout<<"Sorted array after using insertion sort: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }  
    cout<<endl;


    selectionSort(arr, n);
    cout<<"Sorted array after using selection sort: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }  
    cout<<endl;
    

    delete[] arr;

    return 0;
}