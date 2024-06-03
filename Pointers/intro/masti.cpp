#include<iostream>
using namespace std;
int main(){
    int arr[10];
    //Error
    //arr=arr+1;
    //we can't change the mapping of the symbol table
    //arr=arr+1 --->this tries to change the absolute address of the first memory block of the array, which can't be done
    int *p=&arr[0];
    cout<<p<<endl;
    p++;//since we have stored the address of the first element in a pointer then on p++ the address doesn't change instead it points to next element of the array
    cout<<p<<endl;
}