#include<iostream>
using namespace std;
void update(int **p){
    //p=p+1;// this is "pass by value" thing... no change
    //this updated the value in this function only
    *p=*p+1;//
    //**p=**p+1;//incremented the value of n

}
int main(){
    int n=6;
    int*ptr=&n;
    int **ptr2=&ptr;//double pointer
    cout<<"before: "<<n<<endl;
    cout<<"before: "<<ptr<<endl;
    cout<<"before: "<<ptr2<<endl;
    update(ptr2);
    cout<<"after: "<<n<<endl;
    cout<<"after: "<<ptr<<endl;
    cout<<"after: "<<ptr2<<endl;

}