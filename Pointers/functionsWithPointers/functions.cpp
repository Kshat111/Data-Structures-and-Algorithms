#include<iostream>
using namespace std;
void print(int *ptr){
    cout<<ptr<<endl;
}
int main(){
    int num=7;
    int*ptr=&num;
    print(ptr);
}