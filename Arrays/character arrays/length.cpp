//finding length of a string array and reversing it
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
}