#include<iostream>
using namespace std;
int main(){
    int a=7;
    int *pt=&a;
    cout<<"before: "<<*pt<<endl;
    cout<<"before: "<<pt<<endl;
    //*pt=*pt+1;//it simply increments the value of a by 1
    pt=pt+1;//it is quantised in values of address(in our case integer-4bytes )
    cout<<"after: "<<*pt<<endl;
    cout<<"after: "<<pt<<endl;
}