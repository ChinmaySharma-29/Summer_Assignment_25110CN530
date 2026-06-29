#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int choice;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "\n1. Find Length\n";
    cout << "2. Convert to Uppercase\n";
    cout << "3. Display String\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Length = " << str.length();
            break;

        case 2:
            for(int i = 0; i < str.length(); i++) {
                str[i] = toupper(str[i]);
            }
            cout << str;
            break;

        case 3:
            cout << str;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}