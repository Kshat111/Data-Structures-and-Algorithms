#include<iostream>
#include<array>//it is again a static array. So why are we even studying it?? 
using namespace std;
int main(){
    array<int,5>arr={5,2,7,4,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    //printing the elements
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //accesssing element at a particular index
    for(int i=0;i<size;i++){
        cout<<"Element at index = "<<i<<" is "<<arr[i]<<endl;
    }
    //is the array empty or not
    cout<<"Empty or not: "<<arr.empty()<<endl;
    //printing first element
    cout<<"First element: "<<arr.front()<<endl;
    //printing last element
    cout<<"Last element: "<<arr.back()<<endl;
}