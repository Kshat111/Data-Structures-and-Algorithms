#include<iostream>
using namespace std;
class marvel{
    public:
    int fury;
    int carol;
    int giah;
    public:
    int getpower(){
        return this-> carol;
    }
};
class secretInv: public marvel{
    int drax;
    public:
    void skrulls(){
        cout<<"Skrulls have arrived"<<endl;
    }
};
int main(){
    secretInv ob1;
    ob1.skrulls();
}