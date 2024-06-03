#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
void printNos(int N)
    {
        //Your code here
        if(N>0){
            printNos(N-1);
            cout<<N<<" ";
        }
        return;
    }

int sumton(int n){
    if(n<=1) return n;
    return pow(n,3) + sumton(n-1);
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<"Nos upto n: ";
    printNos(n);
    cout<<endl;
    cout<<"sum upto n: "<<sumton(n);
    return 0;
}