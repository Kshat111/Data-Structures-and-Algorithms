#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    // cin>>s;
    getline(cin,s);//this prints space also
    cout<<"You entered: "<<s<<endl;
    return 0;
}