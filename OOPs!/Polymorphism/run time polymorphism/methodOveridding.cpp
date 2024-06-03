#include<iostream>
using namespace std;
class Animal{
    public:
    void speaking(){
        cout<<"Animal Speaking"<<endl;
    }
};
class Dog: public Animal{
    public:
    void speaking(){
        cout<<"Dog Speaking"<<endl;
    }
};
int main(){
    Dog coco;
    coco.speaking();//child class gets executed
}