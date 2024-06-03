#include<iostream>
using namespace std;
class Hero{
    private:
    int health;
    char level;
    short int ability;
    public:
    //getter
    int getHealth(){
        return health;
    }
    
    char getLevel(){
        return level;
    }

    //setter
    void setHealth(int h){
        health=h;
    }
    void setLevel(char l){
        level=l;
    }
};
int main(){
    //static
    Hero xavier;
    cout<<"Health is: "<<xavier.getHealth()<<endl;
    cout<<"Level is: "<<xavier.getLevel()<<endl;
    //dynamic
    Hero *maheshDalle=new Hero;
    cout<<"Health is: "<<(*maheshDalle).getHealth()<<endl;//* applied for deferencing
    cout<<"Level is: "<<(*maheshDalle).getLevel()<<endl;
    cout<<"Health is: "<<maheshDalle->getHealth()<<endl;//-> is another way to access
    cout<<"Level is: "<<maheshDalle->getLevel()<<endl;

}