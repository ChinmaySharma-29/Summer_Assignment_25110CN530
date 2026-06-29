#include <iostream>
using namespace std;

int main() {
    int choice;
    string item;
    int quantity;

    cout << "1. Add Item\n";
    cout << "2. Display Item\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter item name: ";
            cin >> item;
            cout << "Enter quantity: ";
            cin >> quantity;
            cout << "Item Added Successfully";
            break;

        case 2:
            cout << "Item: box\n";
            cout << "Quantity: 40";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}