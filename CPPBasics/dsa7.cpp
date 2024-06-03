//binary to decimal conversion
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter binary number= ";
    cin>>n;
    int i=0;
    float ans=0;
    while (n!=0)
    {
        int digit=n%10;
        n=n/10;
        ans=digit*pow(2,i)+ans;
        i++;
    }
    cout<<"Decimal form= "<<ans;
} 