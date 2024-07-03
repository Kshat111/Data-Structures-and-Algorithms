#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int func(int &a) {
    a+=10;
    return a;
}
int main() {
    int a = 5;
    func(a);
    cout<<a;
    return 0;
}