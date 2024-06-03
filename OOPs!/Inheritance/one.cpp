#include<iostream>
using namespace std;

class Human{
    public:
    int height;
    public:
    int weight;
    int age;
    
    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight=w;
    }
};
class Male: public Human{
    public:
    string color;
    void sleep(){
        cout<<"Male sleeping"<<endl;
    }

};//syntax to create child class
int main(){
    Male M1;
    cout<<M1.height<<endl;
    /*
    Male object1;
    cout<<object1.age<<endl;
    object1.setWeight(98);
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    cout<<object1.color<<endl;
    object1.sleep();*/
}