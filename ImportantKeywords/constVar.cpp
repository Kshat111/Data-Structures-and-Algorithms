#include<iostream>
using namespace std;
int main(){
    const int g=9.8;//using 'const' keyword allows us not to accidentally change the value of the varible during the code
    //#define g 9.8----> also does the same thing but it doesn't take any extra space XD
    //g=5;//program will crash since g is marked as a constant
    cout<<"Value of g is: "<<g<<endl;
}