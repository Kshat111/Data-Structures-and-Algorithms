#include<iostream>
using namespace std;
#define max(a,b)(((a)>(b))?(a):(b))//function-like macro
// This is the ternary conditional operator. If the condition ((a) < (b)) is true (i.e., a is less than b), 
//then the value of the entire ternary expression will be (a) (the minimum value). If the condition is false 
//(i.e., a is greater than or equal to b), then the value of the entire ternary expression will be (b) (the minimum value).
int main(){
    int a;
    int b;
    cout<<"Enter two numbers to compare: ";
    cin>>a>>b;
    cout<<"Maximum of the entered numbers is: "<<max(a,b);
}
