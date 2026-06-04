#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, original, digit, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    original = n;

    while (n > 0) {
        digit = n % 10;
        sum += pow(digit, 3);
        n /= 10;
    }

    if (sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}