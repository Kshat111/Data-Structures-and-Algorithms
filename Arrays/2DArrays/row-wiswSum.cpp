#include<iostream>
using namespace std;
void rowWiseSum(int arr[][10],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        cout<<"Sum of "<<i+1<<" th row is: "<<sum<<endl;
    }
}
void largestRowSum(int arr[][10],int row,int col){
    int maxSum=INT16_MIN;
    int index=-1;
     for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        if(sum>maxSum){
            maxSum=sum;
            index=i;
        }
        }
    cout<<"Max sum is at index: "<<index<<endl;
    cout<<"Max sum is: "<<maxSum;
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
    rowWiseSum(arr,8,10);
    cout<<endl;
    largestRowSum(arr,8,10);
}