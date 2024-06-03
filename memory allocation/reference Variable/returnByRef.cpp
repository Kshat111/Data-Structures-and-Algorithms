#include<iostream>
using namespace std;
int& func(int n){
    //bad practice... since n has scope only in func()
    n++;
    return n;
}
//to correct the bad practice----->
/*
int& func(int n) {
    int* p = new int(n + 1); // Dynamically allocate an integer on the heap
    return *p; // Return a reference to the dynamically allocated integer
}*/
int main(){
    int i=5;
    int& j=i;
    cout<<func(i);
}