#include <iostream>
using namespace std;

void addContacts(string name[], string phone[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Enter Name: ";
        cin >> name[i];

        cout << "Enter Phone Number: ";
        cin >> phone[i];
    }
}

void displayContacts(string name[], string phone[], int n) {
    cout << "\nContact List:\n";

    for(int i = 0; i < n; i++) {
        cout << "Name: " << name[i]
             << "  Phone: " << phone[i] << endl;
    }
}

int main() {
    int n;

    cout << "Enter number of contacts: ";
    cin >> n;

    string name[n], phone[n];

    addContacts(name, phone, n);
    displayContacts(name, phone, n);

    return 0;
}