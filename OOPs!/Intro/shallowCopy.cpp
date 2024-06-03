#include<iostream>
#include<cstring>
using namespace std;
class Hero{
    private: 
    int health;

    public:
    char *name;
    char level;
    //default copy constructor
    Hero(){
        cout<<"Simple constructor called"<<endl;
        name=new char[100];
    }
    Hero(int health,char level){
        this-> health=health;
        this-> level=level;
    }
    
    void print(){
        cout<<endl;
        cout<<"[Name: "<<this-> name<<" ,";
        cout<<"Health: "<<this-> health<<" ,";
        cout<<"Level: "<<this-> level<<" ]";
        cout<<endl<<endl;
    }
     int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }

};
int main(){
    Hero A;
    A.setHealth(98);
    A.setLevel('L');
    char name[7]="Akshat";
    A.setName(name);
    A.print();

    //use default copy constructor
    Hero B(A);
    B.print();

    A.name[0]='W';
    A.print();//no problem till now

    //now problem arises
    B.print();
    //change also got reflected in B hero also... since they are pointing to char arry with same address and accessing same memory block
}