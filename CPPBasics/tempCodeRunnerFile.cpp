#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter decimal number: ";
    cin >> n;

    int sign = (n < 0) ? 1 : 0; // Determine the sign (1 for negative, 0 for non-negative)
    n = abs(n); // Convert negative number to positive for conversion

    int i = 0;
    int ans = 0;

    while (n != 0) {
        int bit = n % 2;
        ans = ans + (bit * pow(10, i));
        n = n / 2;
        i++;
    }

    // Apply two's complement if the input number was negative
    if (sign == 1) {
        ans = ans + 1;
    }

    cout << "Binary form: " << ans << endl;

    return 0;
}
