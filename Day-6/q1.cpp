#include <iostream>
using namespace std;
int main() {
    int n;
    long long binary = 0;
    int d = 1;
    cout << "Enter a decimal number: ";
    cin >> n;
    while (n > 0) {
        int rem = n % 2;
        binary += rem * d;
        d *= 10;
        n /= 2;
    }
    cout << "Binary = " << binary;
    return 0;
}