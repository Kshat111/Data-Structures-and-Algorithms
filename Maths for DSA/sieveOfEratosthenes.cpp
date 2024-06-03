//smarter way to find total number of primes- SIEVE OF ERASTOSTHENES
#include<iostream>
#include<vector>
using namespace std;
void sieveOfErastosthenes(int n){
    vector<bool> isPrime(n+1,true);
    for(int i=2;i*i<=n;i++){
        if(isPrime[i]){
            for(int j=i*i;j<=n;j+=i){
                isPrime[j]=false;
            }
        }
    }
    //printing primes
    cout<<"Prime numbers upto "<<n<<" are ";
    for(int k=2;k<=n;k++){
        if(isPrime[k]){
            cout<<k<<" ";
        }
    }
    cout<<endl<<endl;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    sieveOfErastosthenes(n);
    return 0;
}