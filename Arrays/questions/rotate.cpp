#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
    vector<int> temp(nums.size());
    for(int i=0;i<nums.size();++i){
        temp[(i+k)%nums.size()]=nums[i];
    }
    nums=temp;
}

int main() {
    vector<int> arr={4,7,2,0,8,1,3};
    rotate(arr, -7);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}