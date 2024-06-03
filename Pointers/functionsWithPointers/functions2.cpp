#include<iostream>
using namespace std;
void update(int *p){
    //p++;//copy is passed... that's why address remained same
    *p=*p+1;
}
int main(){
    int num=8;
    int *ptr=&num;
    cout<<"Before: "<<*ptr<<endl;
    update(ptr);
    cout<<"After: "<<*ptr<<endl;
}