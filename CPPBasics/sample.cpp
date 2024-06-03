#include <iostream>
using namespace std;
bool alreadyPresent(int element, int intersection[], int size) {
    for (int i = 0; i < size; ++i) {
        if (intersection[i] == element) {
            return true;
        }
    }
    return false;
}
int main() {
    int arr1[100];
    int arr2[100];
    int intersection[100]={0};
    int n1, n2;
    cin >> n1 >> n2;
    int k = 0;
    for (int i = 0; i < n1; ++i) {
        cin >> arr1[i];
    }
    for (int j = 0; j < n2; ++j) {
        cin >> arr2[j];
    }    
    for (int l = 0; l < n1; ++l) {
        for (int m = 0; m < n2; ++m) {
            if (arr1[l] == arr2[m] && !alreadyPresent(arr2[m], intersection, k)) {
                intersection[k] = arr2[m];
                k++; 
            }
        }
    }
    for (int n = 0; n < k; n++) {
        cout << intersection[n] << " ";
    }
    return 0;
}
