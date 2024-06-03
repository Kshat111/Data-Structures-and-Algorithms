#include <iostream>
#include <cstdlib> // For using the exit function
using namespace std;

int main() {
    int a, b;
    cout << "Enter numbers: ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw -1; 
        }

        cout << "Division: " << a / b << endl;
    } catch (int e) {
        if (e == -1) {
            cout << "Division by zero is not possible. Try some other denominator." << endl;
            exit(1); // Terminate the program
        }
    }

    try {
        char ch;
        cout << "Enter a character: ";
        cin >> ch;
        if (!isdigit(ch)) {
            throw -1;
        }
    } catch (int e) {
        if (e == -1) {
            cout << "Division of characters other than numbers is not possible. Try taking a number." << endl;
        }
    }

    return 0;
}
