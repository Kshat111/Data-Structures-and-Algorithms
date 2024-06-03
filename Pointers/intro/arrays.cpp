#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int *ptr=&arr[0];
    cout<<"Address of first memory block is: "<<arr<<endl;
    cout<<"Address of first memory block is: "<<&arr[0]<<endl;
    cout<<"First element of the array: "<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;//both of these add 1 to the first element 
    cout<<"Element at index=3: "<<*(arr+3)<<endl;
    cout<<"Element at index=3: "<<3[arr]<<endl;
    cout<<sizeof(ptr);
    
}