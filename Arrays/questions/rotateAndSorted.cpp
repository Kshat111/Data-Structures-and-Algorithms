#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
    bool check(vector<int>& nums) {

        if(nums.size()<=1){
            return true;
        }
        int count=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==nums[0]){
                return true;
            }
        }
        for(int i=0;i<nums.size()-1;++i){
            if(nums[i]>nums[i+1]){
                count++;
            }
        }

        if(nums[nums.size()-1]>nums[0]){
            count++;
        }
        cout<<"Count is "<<count<<endl;
        if(count==1){ 
            return true;
        }
        return false;
    }
int main() {
    vector<int> arr={2,1,3,4};
    cout<<check(arr);
    return 0;
}