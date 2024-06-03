#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i * i <= n; i++){ // Optimized loop, iterating up to the square root of n
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int countPrime(int n,int m){
    int count = 0;
    for(int i = n; i <=m; i++){ // Fixed loop, including 'n' in the count
        if(isPrime(i)){
            count++;
        }
    }
    return count;
}

vector<int> printPrimes(int n, int m){
    vector<int> primes;
    for(int i = n; i <= m; i++){
        if(isPrime(i)){
            primes.push_back(i);
        }
    }
    return primes;
}

int main(){
    int n, m;
    cout << "Enter two numbers: ";
    cin >> n >> m;

    int ans = countPrime(n,m);
    cout << "Number of primes up to " << n << ": " << ans << endl;

    vector<int> primes = printPrimes(n, m);
    cout << "Primes between " << n + 1 << " and " << m - 1 << ": ";
    for(auto i : primes){
        cout << i << " ";
    }
    cout << endl;
}
