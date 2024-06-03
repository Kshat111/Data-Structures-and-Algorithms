#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class maxHeap{
    public:
    int size;
    int *arr=new int[size];
    maxHeap(){
        arr[0]=-1;
        size=0;
    }
    void insert(int val){
        size++;
        int index=size;
        arr[index]=val;
        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[index],arr[parent]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i=1;i<=size;++i){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void deleteRoot(){
        if(size==0){
            return;
        }
        // put root element into last element
        arr[1]=arr[size];
        // delete the last element (which was the old root node)
        size--;
        // correctly position the new root element
        int i=1;
        while(i<size){
            int leftChild=2*i;
            int rightChild=2*i+1;
            if(leftChild<size && arr[i]<arr[leftChild] && arr[leftChild]>arr[rightChild]){
                swap(arr[i],arr[leftChild]);
                i=leftChild;
            }
            else if(rightChild<size && arr[i]<arr[rightChild] && arr[leftChild]<arr[rightChild]){
                swap(arr[i],arr[rightChild]);
                i=rightChild;
            }
            else{
                return;
            }
        }

    }
};

int main() {
    
    maxHeap h;
    h.insert(60);
    h.insert(50);
    h.insert(52);
    h.insert(56);
    h.insert(54);
    h.insert(58);
    cout<<"Original Heap: ";
    h.print();
    cout<<"After deleting root node: ";
    h.deleteRoot();
    h.print();
    return 0;
}



















