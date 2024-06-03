#include<iostream>
using namespace std;
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
    //using extra space
    char revarray[100]={};
    for(int i=0;i<n;i++){
        revarray[i]=array[n-1-i];
    }
    revarray[n]='\0';
    //comparing corresponding elements
    for(int i=0;i<n;i++){
        if(array[i]!=revarray[i]){
            return false;
        }
    }
    return true;
}
int main(){
    char array[100]={};
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