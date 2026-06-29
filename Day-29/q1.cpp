#include <iostream>
using namespace std;

int main() {
    int choice;
    double a, b;

    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch(choice) {
        case 1:
            cout << "Result = " << a + b;
            break;
        case 2:
            cout << "Result = " << a - b;
            break;
        case 3:
            cout << "Result = " << a * b;
            break;
        case 4:
            if(b != 0)
                cout << "Result = " << a / b;
            else
                cout << "Division by zero not allowed";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}