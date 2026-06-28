#include <iostream>
using namespace std;

int main() {
    double balance = 1000;
    int choice;
    double amount;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter amount: ";
                cin >> amount;
                balance += amount;
                break;

            case 2:
                cout << "Enter amount: ";
                cin >> amount;

                if(amount <= balance)
                    balance -= amount;
                else
                    cout << "Insufficient Balance\n";
                break;

            case 3:
                cout << "Balance = " << balance << endl;
                break;

            case 4:
                cout << "Thank You!";
                break;

            default:
                cout << "Invalid Choice";
        }
    } while(choice != 4);

    return 0;
}