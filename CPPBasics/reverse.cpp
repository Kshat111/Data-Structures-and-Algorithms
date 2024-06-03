#include<iostream>
#include<vector>
using namespace std;

vector<int> digits(int n) {
    vector<int> result;
    n = abs(n); // Handle negative numbers by taking the absolute value
    while (n != 0) {
        int ans = n % 10;
        result.push_back(ans);
        n = n / 10;
    }
    return result;
}

void reverseDigits(int x) {
    vector<int> result = digits(x);
    for (int i = result.size() - 1; i >= 0; --i) {
        cout << result[i];
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    reverseDigits(n);
    return 0;
}
