#include<iostream>
using namespace std;
//creating a class named Hero
class Hero{
   
    //properties
    private:
    int health;
    public:
    char level;
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
    //creating an object of Hero class
    //STATIC ALLOCATION
    Hero MaheshDalle;

    //using getter... prints garbage value
    cout<<"Health is: "<<MaheshDalle.getHealth()<<endl;
    
    //using setter to set health to a value
    MaheshDalle.setHealth(80);  
    MaheshDalle.level='B';
    cout<<"Size is: "<<sizeof(MaheshDalle)<<endl;
    
    //since we have set the value of health to 80.. hence the output
    cout<<"Health is: "<<MaheshDalle.getHealth()<<endl;
    cout<<"Level is: "<<MaheshDalle.level<<endl;

}