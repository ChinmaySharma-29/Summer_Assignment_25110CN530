#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    int sum = 0;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int total = (n + 1) * (n + 2) / 2;
    int missing = total - sum;

    cout << "missing number = " << missing;

    return 0;
}