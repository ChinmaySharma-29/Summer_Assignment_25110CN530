#include <iostream>
using namespace std;

int main() {
    float basic, hra, da, salary;

    cout << "Enter Basic Salary: ";
    cin >> basic;

    hra = 0.2 * basic;
    da = 0.1 * basic;
    salary = basic + hra + da;

    cout << "\n--- Salary Details ---\n";
    cout << "Basic: " << basic << endl;
    cout << "HRA: " << hra << endl;
    cout << "DA: " << da << endl;
    cout << "Total Salary: " << salary << endl;

    return 0;
}