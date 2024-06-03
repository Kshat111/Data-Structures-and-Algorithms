#include<iostream>
using namespace std;
class Hero{
    private:
    int health;
    char level;
    short int ability;
    public:
    /*
    //new default constructor
    Hero(){
        cout<<"New constructor instantiated"<<endl;
    }*/
    //this will make sure that this is now the default call for the object of this class
    
    
    //example of parameterised constructor
    Hero(int health){
        cout<<"Proof that this is a pointer: "<<this<<endl;
        this->health=health;//to which 'health' 'this' is pointing to is the one used in the function (or nearest scope)
        //this health ka mtlb... Hero function ki health is equal to health in private 
    }
};
int main(){
    Hero *maheshDalle=new Hero(10);
    cout<<"Address of maheshDalle is: "<<maheshDalle<<endl;//don't use & operator in dynamic allocation
    delete maheshDalle;
}