#include<iostream>
using namespace std;
int skore=68;//global variable(can be accessed throughout the code)
//NEVER USE IT!!!!!
//if changed, then the change will get reflected in all the functions
//use reference variable instead
void a(int n){
    cout<<"In a: "<<n<<endl;
}
void b(int n){
    cout<<"In b: "<<n<<endl;
}
int main(){
    int n=9;//local variable(lifespan only within the function)
    cout<<"In main: "<<skore<<endl;
    a(skore);
    b(skore);
}
