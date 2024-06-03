#include <iostream>
using namespace std;
int fstocc(int arr[],int size, int key){
   int s=0;
   int ans=-1; 
   int e=size-1;
   int mid=s+(e-s)/2;

   while(s<=e){
    if(key==arr[mid]){
      int ans=mid;
      e=mid-1;
    }
    else if(key>arr[mid]){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
     mid=s+(e-s)/2;
      
   }

    return ans;
}

int main(){
    int arr[6]={1,2,3,4,4,5};
    cout<<"first index at which  4 is present:"<<fstocc(arr,6,4);
}