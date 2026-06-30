#include <iostream>
using namespace std;

void display(string name[], int salary[], int n) {
    cout << "\nEmployee Details:\n";

    for (int i = 0; i < n; i++) {
        cout << "Name: " << name[i]
             << "  Salary: " << salary[i] << endl;
    }
}

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    string name[n];
    int salary[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter employee name: ";
        cin >> name[i];

        cout << "Enter salary: ";
        cin >> salary[i];
    }

    display(name, salary, n);

    return 0;
}