#include<iostream>
using namespace std;
int main(){ 
    //another way to initialise a pointer
    int num=8;
    int*p=0;
    p=&num;
    cout<<p<<endl;
    cout<<*p<<endl;
}