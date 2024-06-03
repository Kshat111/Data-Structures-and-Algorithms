#include<iostream>
using namespace std;
class A{
    public:
    void func(){
        cout<<"Inside class A";
    }
};
class B{
    public:
    void func(){
        cout<<"Inside class B";
    }
};
class C: public A, public B{

};
int main(){
    C ob;
    ob.A::func();// to call class A 
    ob.B::func();// to call class B 

    return 0;
}