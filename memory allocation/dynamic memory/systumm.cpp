#include<iostream>
using namespace std;
int main(){
    while(true){
        int*ptr=new int;// after exiting the while loop(or any scope)... static memory automatically gets deleted(we don't have to delete it) 
        //but in case of dynamic we have to delete it manually using 'delete' keyword (in c++)
        //in our case memory block for pointer ptr gets deleted after the scope of while loop but due to the loop... memory for int block gets multiplied leading to program crash
    }
}