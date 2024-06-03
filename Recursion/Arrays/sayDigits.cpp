#include<iostream>
using namespace std;
void sayDigits(int n,string arr[]){
    //base case
    if(n==0){
        return;
    }
    //processing
    int digit=n%10;
    n=n/10;
    //recursive relation
    sayDigits(n,arr);
    cout<<arr[digit]<<" ";
}
int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    long long int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<endl<<endl;
    sayDigits(n,arr);
}