#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

void frequencyCounter(int arr[], int n){
    unordered_map<int, int> count;
    for(int i=0;i<n;++i){
        count[arr[i]]++;
    }
    unordered_map<int, int> :: iterator itr = count.begin();
    while(itr!=count.end()){
        cout<<itr->first<<" occurs "<<itr->second<<" times"<<endl;
        itr++;
    }
}

int main() {
    int arr[10] = {2,2,3,4,5,5,6,6,6,0};
    frequencyCounter(arr, 10);
    return 0;
}