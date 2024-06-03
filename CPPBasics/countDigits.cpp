#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> digits(int n){
        vector<int> result;
        while(n!=0){
            int ans=n%10;
            result.push_back(ans);
            n=n/10;
        }
        return result;
    }
        
int evenlyDivides(int N){
        //code here
        vector<int> vec=digits(N);
        int count=0;
        for(int i=0;i<vec.size();++i){
            if(N%vec[i]==0){
                count++;
            }
        }
        return count;
}
int main() {

int n;
cout<<"enter n: ";
cin>>n;
int ans=evenlyDivides(n);
cout<<ans;
    return 0;
}