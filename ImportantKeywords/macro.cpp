#include<iostream>
using namespace std;
#define PI 3.14//this is a macro... no ';' needed
//doesn't take extra space unlike a variable
int main(){
    int r;
    cout<<"Enter radius: ";
    cin>>r;
    //PI=3.14   //this takes some space in the memory which reduces performance(which is negligible)
    double area=PI*r*r;
    cout<<"Area is: "<<area;
}
