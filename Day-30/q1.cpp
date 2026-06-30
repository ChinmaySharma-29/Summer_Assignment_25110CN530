#include <iostream>
using namespace std;

void display(string name[], int marks[], int n) {
    cout << "\nStudent Records:\n";
    for (int i = 0; i < n; i++) {
        cout << "Name: " << name[i]
             << "  Marks: " << marks[i] << endl;
    }
}

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    string name[n];
    int marks[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter name: ";
        cin >> name[i];

        cout << "Enter marks: ";
        cin >> marks[i];
    }

    display(name, marks, n);

    return 0;
}