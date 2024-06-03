#include<iostream>
using namespace std;
void passByReference(int& n){
    n++;//this created the same n which is in main function
}
void passByValue(int n){
    n++;//this created a copy of n
}
int main(){
    int n=5;
    int& m=n;
    cout<<"Before PBV: "<<n<<endl;
    passByValue(n);
    cout<<"After PBV: "<<n<<endl;
    cout<<endl;
    cout<<"Before PBR: "<<n<<endl;
    passByReference(n);
    cout<<"After PBR: "<<n<<endl;
}