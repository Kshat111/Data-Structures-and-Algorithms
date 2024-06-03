#include<iostream>
using namespace std;
int main(){
    char crr[6]="ainas";//we have to give 6 as the size... additional 1 is given to store the null character
    cout<<crr<<endl;//in case of char arrays cout prints the content of the array
    cout<<"Address of char array is: "<<&crr<<endl;
    char *c=&crr[0];
    cout<<c<<endl;//whole content printed again

}