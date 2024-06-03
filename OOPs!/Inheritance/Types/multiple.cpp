#include<iostream>
using namespace std;
class marvel{
    public:
    int fury;
    int carol;
    int giah;
    public:
    void daddy(){
        cout<<endl<<endl<<"Mai to papa hu papa... puri duniya ka papa!"<<endl<<endl;
    }
    int getpower(){
        return this-> carol;
    }
};
class secretInv{
    int drax;
    public:
    void skrulls(){
        cout<<endl<<"Skrulls have arrived"<<endl;
    }
};
class blip: public marvel, public secretInv{

};
int main(){
    blip ob1;
    ob1.skrulls();
    ob1.daddy();
}