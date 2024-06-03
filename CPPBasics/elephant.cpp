#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int steps=0;
    int x=0;
    while(x<n){
        if(x+5<=n){
            // steps++;
            x+=5;
        }
        else if(x+4<=n){
            // steps++;
            x+=4;
        }
        else if(x+3<=n){
            // steps++;
            x+=3;
        }
        else if(x+2<=n){
            // steps++;
            x+=2;
        }
        else if(x+1<=n){
            // steps++;
            x+=1;
        }
        steps++;
    }
    cout<<steps;
    return 0;
}