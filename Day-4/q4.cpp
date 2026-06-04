#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int start, end;
    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;
    cout << "Armstrong numbers are: ";
    for (int i = start; i <= end; i++) {
        int n = i, sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += pow(digit, 3);
            n /= 10;
        }

        if (sum == i) {
            cout << i << " ";
        }
    }
    return 0;
}