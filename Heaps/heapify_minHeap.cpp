#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void heapify(vector<int> &arr, int n, int i){
    int smallest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<=n && arr[smallest]>arr[left]){
        smallest=left;
    }
    if(right<=n && arr[smallest]>arr[right]){
        smallest=right;
    }
    if(smallest!=i){
        swap(arr[i],arr[smallest]);
        heapify(arr,n,smallest);
    }
}
vector<int> buildMinHeap(vector<int> &arr)
{
    // Write your code here
        int n=arr.size();
        for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    return arr;
}
int main(){

    return 0;
}
