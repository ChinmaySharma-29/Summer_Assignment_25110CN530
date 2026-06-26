#include <iostream>
using namespace std;

int main() {
    int choice;
    int balance = 1000;
    int amount;

    cout << "1. Check Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Balance = " << balance;
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance = balance + amount;
            cout << "New Balance = " << balance;
            break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount <= balance) {
                balance = balance - amount;
                cout << "Remaining Balance = " << balance;
            } else {
                cout << "Insufficient Balance";
            }
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}