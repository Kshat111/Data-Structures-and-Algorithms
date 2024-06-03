#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int missingNum(int arr[], int N){
    int org_sum=N*(N+1)*0.5;
    int sum=0;
    for(int i=0;i<N;++i){
        sum=sum+arr[i];
    }
    return org_sum-sum;
}
int main() {
    int n=11;
    int arr[11]={4 ,6 ,7 ,9 ,2 ,1 ,8 ,11 ,10 ,3};
    int result= missingNum(arr,n);
    cout<<result;
    return 0;
}