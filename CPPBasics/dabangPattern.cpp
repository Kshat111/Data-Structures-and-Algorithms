#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    int star=i-1;
    int star1=i-1;
    while(j<=n-i+1){
        cout<<j;
        j++;
    }
    while(star){
        cout<<" ";
        star--;
    }
    while(star1){
        cout<<" ";
        star1--;
    }
    int start=n-i+1;
    while(start){
        cout<<start;
        start--;
    }
    cout<<endl;
    i++;
  }
}