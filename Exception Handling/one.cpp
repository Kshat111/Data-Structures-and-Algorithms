#include<iostream>
using namespace std;
int main(){
    float age;
    try{
        cout<<"Enter your age (in years): ";
        cin>>age;
        if(age>=18){
            cout<<"You are eligible to vote"<<endl;
        }
        else{
            throw(age); //          1.throw "Error found"         2.throw -1
        }
    }
    catch(...){
        cout<<"Sorry, you are not eligible to vote"<<endl;
        cout<<"Your age is: "<<age<<" years";
    }
    return 0;
}