#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter number of rows: ";
    cin>>row;
    int col;
    cout<<"Enter number of columns: ";
    cin>>col;
    //creating a row x col matrix
    int**arr=new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }
    //taking input
    cout<<"Enter elements: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //printing
    cout<<"Matrix: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //releasing the heap memory 
    for(int i=0;i<row;i++){
        delete []arr[i];
    }
    delete []arr;
}