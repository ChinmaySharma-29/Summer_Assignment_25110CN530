#include <iostream>
using namespace std;

int main() {
    int arr[5], sum = 0, choice;

    cout << "Enter 5 elements:\n";
    for(int i = 0; i < 5; i++)
        cin >> arr[i];

    cout << "\n1. Display Array\n";
    cout << "2. Find Sum\n";
    cout << "3. Find Largest Element\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            for(int i = 0; i < 5; i++)
                cout << arr[i] << " ";
            break;

        case 2:
            for(int i = 0; i < 5; i++)
                sum += arr[i];
            cout << "Sum = " << sum;
            break;

        case 3:
            int max = arr[0];
            for(int i = 1; i < 5; i++) {
                if(arr[i] > max)
                    max = arr[i];
            }
            cout << "Largest = " << max;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}