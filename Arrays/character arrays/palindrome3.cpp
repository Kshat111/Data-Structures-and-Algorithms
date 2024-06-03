//checking paalindrome when uppercase and lowercase are samem thing 
#include<iostream>
using namespace std;
char toLowerCase(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else if(ch>='A'&& ch<='Z'){
        char temp=ch-'A'+'a';
        return temp;
    }
}
int length(char array[]){
    int count=0;
    //iterate till we get a null character
    for(int i=0;array[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverseArray(char array[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(array[s],array[e]);
        s++;
        e--;
    }
}
bool palindrome(char array[],int n){
    //comparing corresponding elements
    for(int i=0;i<n;i++){
        if(toLowerCase(array[i])!=toLowerCase(array[n-1-i])){
            return false;
        }
    }
    return true;
}
int main(){
    char array[50]={};
    cout<<"Enter any word: ";
    cin>>array;
    int n=length(array);
    cout<<"Length is: "<<n<<endl;  
    reverseArray(array,n);
    cout<<"After reversing: ";
    for(int i=0;i<n;i++){
        cout<<array[i];
    }
    cout<<endl;
    if(palindrome(array,n)){
        cout<<"This is a palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome";
    }
}