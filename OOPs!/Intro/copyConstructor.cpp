#include<iostream>
using namespace std;
class Hero{
    public:
    int health;
    char level;
    Hero(int health,char level){
        this-> health=health;
        this-> level=level;
    }
    //new copy constructor (default copy const got deleted)
    Hero(Hero& temp){//always pass by reference to avoid being stuck in loop
        cout<<"Copy constructor called"<<endl;
        this-> health=temp.health;
        this-> level=temp.level;
    }
    void print(){
        cout<<"Health: "<<this-> health<<endl;
        cout<<"Level: "<<this-> level<<endl;
    }
};
int main(){
    Hero A(80,'A');
    A.print();

    //copy constructor
    Hero B(A);
    B.print();

}