#include<iostream>
#include<cstring>
using namespace std;
class Hero{
    private: 
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;//static member
    //on marking a variable as 'static' it belongs to a class and can be accessed without creating an object


    //default copy constructor
    Hero(){
        cout<<"Simple constructor called"<<endl;
        name=new char[100];
    }
    Hero(int health,char level){
        this-> health=health;
        this-> level=level;
    }
    //new copy constructor
    Hero(Hero& temp){

        //create new array to distinguish between both memory blocks
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;


        cout<<"Copy constructor called"<<endl;
        this-> health=temp.health;
        this-> level=temp.level;
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


    //static function
    static int func(){
        return timeToComplete; 
    }


    //Destructor
    ~Hero(){
        cout<<"Destructor called!"<<endl;
    }

};
//always initialised outside the class
int Hero::timeToComplete=5;

int main(){
    //for ststically made objects, destructor is called automatically
    Hero A;
    //for dynamic ones, we have to call destructor manually
    Hero *B=new Hero();
    delete B; 


    //good practice (to access static variable)
    cout<<Hero::timeToComplete<<endl;

    //this is also correct but not practised
    cout<<A.timeToComplete<<endl;


    //static function can access static members ONLY!!
    cout<<Hero::func()<<endl;
}