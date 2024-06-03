#include<iostream>
using namespace std;
int main(){
    int n=6;
    int*ptr=&n;
    int **ptr2=&ptr;//double pointer
    int ***ptr3=&ptr2;
    int ****ptr4=&ptr3;
    int *****ptr5=&ptr4;
    cout<<"Address of ptr: "<<ptr<<endl;
    cout<<"Address of ptr: "<<*ptr2<<endl;
    cout<<"n: "<<*****ptr5<<endl;
    cout<<"Address of n: "<<&n<<endl;
    cout<<"Address of n: "<<****ptr5<<endl;
    cout<<"n: "<<****ptr4<<endl;
}