#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int reverse(long long x) {
        long long rev=0;
        long long rem;
        if(x>0){
            while(x>0){
            rem=x%10;
            rev=rev*10+rem%10;
            x/=10;
        }
        }
        else{
            x=-x;
             while(x>0){
            rem=x%10;
            rev=rev*10+rem%10;
            x/=10;
        }
        rev=-rev;
        }
        return rev;
    }
int main() {
    int n =1534236469;
    cout<<reverse(n);
    return 0;
}