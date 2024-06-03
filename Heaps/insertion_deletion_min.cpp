#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class minHeap{
    public:
    int size1;
    int *arr1=new int[size1];
    minHeap(){
        arr1[0]=-1;
        size1=0;
    }
    // INSERTION AT END
    void insert1(int val1){
        size1++;
        int index1=size1;
        arr1[index1]=val1;
        while(index1>1){
            int parent1=index1/2;
            if(arr1[parent1]>arr1[index1]){
                swap(arr1[index1],arr1[parent1]);
                index1=parent1;
            }
            else{
                return;
            }
        }
    }
    void print1(){
        for(int i=1;i<=size1;++i){
            cout<<arr1[i]<<" ";
        }
        cout<<endl;
    }
    // DELETION OF ROOT NODE
    void deleteRoot(){
        // base case
        if(size1==0){
            return;
        }
        // swap first and last element
        arr1[1]=arr1[size1];
        // delete last element (original root)
        size1--;
        // correctly position the new root
        int i=1;
        while(i<size1){
            int leftChild=2*i;
            int rightChild=2*i+1;
            if(leftChild<size1 && arr1[i]>arr1[leftChild] && arr1[rightChild]>arr1[leftChild]){
                swap(arr1[i],arr1[leftChild]);
                i=leftChild;
            }
            else if(rightChild<size1 && arr1[i]>arr1[rightChild] && arr1[rightChild]<arr1[leftChild]){
                swap(arr1[i],arr1[rightChild]);
                i=rightChild;
            }
            else{
                return;
            }
        }
    }
};
int main() {
    minHeap h1;
    h1.insert1(60);
    h1.insert1(50);
    h1.insert1(56);
    h1.insert1(54);
    h1.insert1(58);
    h1.insert1(52);
    cout<<"Original Heap: ";
    h1.print1();
    h1.deleteRoot();
    cout<<"After removing root: ";
    h1.print1();
    return 0;
}