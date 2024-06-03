#include<iostream>
using namespace std;
int main(){
    //creating a 2d array
    cout<<"Enter values: ";
    int arr[3][4];
    //to take row-wise input just replace i with j
    //taking input: column-wise
    for(int j=0;j<4;j++){
        for(int i=0;i<3;i++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //printing
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}