#include<iostream>
using namespace std;
void reverseString(string& str/*pass reference string so that changes are made in the original string itself*/,int s,int e){
    //base case
    if(s>e){
        return;
    }
    swap(str[s],str[e]);
    s++;
    e--;
    //RC
    reverseString(str,s,e);
}
int main(){
    string str;
    cout<<"Enter a text: ";
    cin>>str;
    reverseString(str,0,str.length()-1);
    cout<<"Reversed text: "<<str<<endl;
}