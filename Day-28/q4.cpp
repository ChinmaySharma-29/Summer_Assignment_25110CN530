#include <iostream>
using namespace std;

int main() {
    string contacts[10];
    int count = 0, choice;

    do {
        cout << "\n1. Add Contact\n2. View Contacts\n3. Exit\n";
        cin >> choice;

        switch(choice) {
            case 1:
                if(count < 10) {
                    cout << "Enter contact name: ";
                    cin >> contacts[count];
                    count++;
                } else {
                    cout << "Contact List Full\n";
                }
                break;

            case 2:
                cout << "Contacts:\n";
                for(int i = 0; i < count; i++) {
                    cout << i + 1 << ". " << contacts[i] << endl;
                }
                break;

            case 3:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice";
        }
    } while(choice != 3);

    return 0;
}