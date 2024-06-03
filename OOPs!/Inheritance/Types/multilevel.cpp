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
        cout<<endl<<endl<<"Skrulls have arrived"<<endl<<endl;
    }
};
class blip: public secretInv{

};
class thanos: public blip{

};
int main(){
    thanos ob1;
    ob1.skrulls();
}