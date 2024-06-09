#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

/////////////////////////////////////////////////////////

void merge(int arr[],int low, int high){
    int mid=(low + high)/2;
    int len1 = mid-low+1;
    int len2=high-mid;
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];
    int mainIndex=low;
    for(int i=0;i<len1;i++){
        arr1[i]=arr[mainIndex++];
    }
    mainIndex=mid+1;
    for(int i=0;i<len2;i++){
        arr2[i]=arr[mainIndex++];
    }
    int i=0;
    int j=0;
    int k=low;
    while(i<len1 && j<len2){
        if(arr1[i]<arr2[j]){
            arr[k++]=arr1[i++];
        }
        else{
            arr[k++]=arr2[j++];
        }
    }
    while(i<len1){
        arr[k++]=arr1[i++];
    }
    while(j<len2){
        arr[k++]=arr2[j++];
    }
    delete[] arr1;
    delete[] arr2;
}
void mergeSort(int arr[], int low, int high){
    if(low>=high){
        return;
    }
    int mid=(low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, high);
}

/////////////////////////////////////////////////////////

int partition(int arr[], int low, int high){
    int pivotIndex = low;
    int pivot = arr[low];
    int count=0;
    for(int i=low+1;i<=high;i++){
        if(arr[i]<pivot){
            count++;
        }
    }
    pivotIndex+=count;
    swap(arr[low], arr[pivotIndex]);
    while(low<pivotIndex && high > pivotIndex){
        while(arr[low]<pivot){
            low++;
        }
        while(arr[high]>pivot){
            high--;
        }
        if(low<pivotIndex && high > pivotIndex){
            swap(arr[low], arr[high]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[], int low, int high){
    if(low>=high){
        return;
    }
    int pivot = partition(arr, low, high);
    quickSort(arr, low, pivot-1);
    quickSort(arr, pivot+1, high);
}

////////////////////////////////////////////////////////

void bubbleSort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i+1;j++){ // as i increases, j decreases
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

////////////////////////////////////////////////////////

void insertionSort(int arr[], int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>=0 && arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            j--;
        }
    }
}

////////////////////////////////////////////////////////

void selectionSort(int arr[], int n){
    for(int i=0; i<=n-2; ++i){
        int minIndex=i;
        for(int j=i;j<=n-1;++j){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

///////////////////////////////////////////////////////

void recursiveBubbleSort(int arr[], int n){
    if(n==0) return;
    for(int i=0; i<n-1;++i){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    recursiveBubbleSort(arr, n-1);
}

///////////////////////////////////////////////////////

void recursiveSelectionSort(int arr[], int n, int left){
    if(left==n){
        return;
    }
    int minIndex = left;
    for(int i=left;i<n;i++){
        if(arr[i]<arr[minIndex]){
            minIndex=i;
        }
    }
    swap(arr[left], arr[minIndex]);
    recursiveSelectionSort(arr, n, left+1);
}

///////////////////////////////////////////////////////

void recursiveInsertionSort(int arr[], int n, int left){
    if(left==n) return;
    int key = left;
    while(key>0 && arr[key-1]>arr[key]){
        swap(arr[key-1], arr[key]);
        key--;
    }
    recursiveInsertionSort(arr, n, left+1);
}

///////////////////////////////////////////////////////



int main() {
    int n = 10;

    int arr1[n] = {3,32,7,2,0,3,5,8,67,24};
    int arr2[n] = {6,3,8,2,88,90,54,34,35,-87};
    int arr3[n] = {3,37,79,2,23,45,5,56,67,24};
    int arr4[n] = {45,-32,7,2,0,345,5,-8,6213,213};
    int arr5[n] = {-57,32,7,2,-80,56,56,8,6745,265};
    int arr6[n] = {-7,2,5,4,-834,56,3,8,54,86};
    int arr7[n] = {7,22,5,42,-4,56,3,8,5,86};
    int arr8[n] = {-71,2,5,34,-834,6,3,18,54,46};




    mergeSort(arr1,0, n-1);
    cout<<"Sorted array after using merge sort: ";
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }    
    cout<<endl;


    quickSort(arr2,0, n);
    cout<<"Sorted array after using quick sort: ";
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }  
    cout<<endl;


    bubbleSort(arr3, n);
    cout<<"Sorted array after using bubble sort: ";
    for(int i=0;i<n;i++){
        cout<<arr3[i]<<" ";
    }  
    cout<<endl;


    insertionSort(arr4, n);
    cout<<"Sorted array after using insertion sort: ";
    for(int i=0;i<n;i++){
        cout<<arr4[i]<<" ";
    }  
    cout<<endl;


    selectionSort(arr5, n);
    cout<<"Sorted array after using selection sort: ";
    for(int i=0;i<n;i++){
        cout<<arr5[i]<<" ";
    }  
    cout<<endl;

    recursiveBubbleSort(arr6, n);
    cout<<"Sorted array after using recursive bubble sort: ";
    for(int i=0;i<n;i++){
        cout<<arr6[i]<<" ";
    }  
    cout<<endl;

    recursiveSelectionSort(arr7, n, 0);
    cout<<"Sorted array after using recursive selection sort: ";
    for(int i=0;i<n;i++){
        cout<<arr7[i]<<" ";
    }  
    cout<<endl;

    recursiveInsertionSort(arr8, n, 0);
    cout<<"Sorted array after using recursive insertion sort: ";
    for(int i=0;i<n;i++){
        cout<<arr8[i]<<" ";
    }  
    cout<<endl;

    return 0;
}