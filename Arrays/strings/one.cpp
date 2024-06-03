#include<iostream>
using namespace std;
int main(){
    char arr[10]={'a','b','\0','c','d'};
    string s={'a','b','\0','c','d'};
    cout<<arr<<endl;
    cout<<s<<endl;//'\0' considered as as a part of the array 
}