#include<iostream>
using namespace std;
class A{
    public:
    void func1(){
        cout<<"Inside class A";
    }
};
class B: public A{
    public:
    void func2(){
        cout<<"Inside class B";
    }
};
class C: public A{
    public:
    void func3(){
        cout<<"Inside class C";
    }
};
int main(){
    A ob1;
    B ob2;
    C ob3;

    ob1.func1();
    cout<<endl;

    ob2.func1();
    cout<<endl;
    ob2.func2();
    cout<<endl;

    ob3.func1();
    cout<<endl;
    //ob3.func2();// C and B has no connection
    ob3.func3();
    cout<<endl;


    return 0;
}