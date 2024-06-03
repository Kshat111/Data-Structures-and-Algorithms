//initialising an array in starting
#include<iostream>
using namespace std;
int main(){
    //int arr[3][4]={1,2,3,4,5,6,7,8,9,1,2,3}; //by default takes elements in row-wise sequence
    int arr[3][4]={{3,6,2,7},{8,1,5,0},{1,3,0,4}};
    //printing
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}