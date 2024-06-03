#include<iostream>
using namespace std;
int main(){
    //BAD PRACTICE-NEVER FOLLOW THIS
    // int*ptr;
    // cout<<*ptr<<endl; //returns some garbage value 
    //Instead we can do this
    int *ptr=0;//null pointer
    cout<<*ptr<<endl;//segmentation fault
}