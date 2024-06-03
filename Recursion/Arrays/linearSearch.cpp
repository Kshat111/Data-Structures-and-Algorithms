#include<iostream>
using namespace std;
void printarr(int*arr,int n){
    cout<<"Size is: "<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
}
bool linearSearch(int *arr,int key,int n){
    printarr(arr,n);
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    int rempart=linearSearch(arr+1,key,n-1);
    return rempart;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the value you want to search for: ";
    cin>>key;
    if(linearSearch(arr,key,size)){
        cout<<key<<" is present";
    }
    else{
        cout<<key<<" is not present";
    }

}