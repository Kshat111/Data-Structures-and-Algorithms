#include<iostream>
using namespace std;
void rowWiseSum(int arr[][10],int key,int row,int col){
    if(key<0 || key>row){
        cout<<"Invalid row number";
    }
    int sum=0;
    for(int j=0;j<col;j++){
        sum=sum+arr[key][j];
    }
    cout<<"Sum is: "<<sum<<endl;
    
}

int main(){
    int arr[8][10]={
        {12, 34, 56, 78, 45, 23, 67, 89, 32, 54},
        {43, 21, 76, 98, 10, 87, 65, 23, 32, 57},
        {32, 54, 67, 89, 45, 12, 65, 37, 89, 32},
        {98, 12, 56, 32, 45, 76, 21, 89, 32, 54},
        {56, 78, 32, 54, 12, 43, 67, 89, 45, 21},
        {23, 54, 65, 87, 10, 32, 76, 43, 21, 98},
        {87, 65, 32, 54, 98, 21, 67, 23, 45, 12},
        {10, 32, 45, 67, 54, 76, 89, 23, 12, 21}
    };
    cout<<endl;
    int key;
    cout<<"Enter row number: ";
    cin>>key;
    rowWiseSum(arr,key,8,10);
}