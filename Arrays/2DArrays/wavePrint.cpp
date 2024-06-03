#include<iostream>
#include<vector>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int> ans;
    for(int col=0;col<mCols;col++){
        if(col%2!=0){
            //odd col
            for(int row=nRows-1;row>=0;row--){
                ans.push_back(arr[row][col]);
            }
        }
        else{
            //even col
            for(int row=0;row<nRows;row++){
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}
int main(){
    
}