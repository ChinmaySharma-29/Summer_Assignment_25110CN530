#include <iostream>
using namespace std;

void showBooks(string books[], int n) {
    cout << "\nBooks Available:\n";

    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << books[i] << endl;
    }
}

int main() {
    string books[5] = {
        "C++",
        "Java",
        "Python",
        "DBMS",
        "OS"
    };

    showBooks(books, 5);

    return 0;
}