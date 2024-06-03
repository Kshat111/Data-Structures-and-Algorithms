#include<iostream>
using namespace std;
int main(){
    int num=234;
    int*ptr=&num; 
    cout<<"Address of num is: "<<&num<<endl;
    cout<<"Address of the pointer: "<<&ptr<<endl;
    cout<<"Address of num is: "<<ptr<<endl;
    cout<<"Value of num is: "<<num<<endl;
    cout<<"Value of Pointer is: "<<*ptr<<endl;
    cout<<"Size of num is: "<<sizeof(num)<<endl;
    cout<<"Size of pointer is: "<<sizeof(ptr)<<endl;//my system is 32-bit
}