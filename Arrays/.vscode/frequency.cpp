#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void frequency(int arr[], int n){
    vector<bool> visited(n, false);
    int count=0;
    for(int i=0;i<n;++i){
        if(visited[i]){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                visited[j]=true;
                count++;
            }
        }
        cout<<arr[i]<<" occurs "<<count<<" times"<<endl;
    }
    
}
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int * arr=new int[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    frequency(arr,n);
    return 0;
}