#include <iostream>
using namespace std;

int main() {
    string books[5];
    int count = 0, choice;

    while(true) {
        cout << "\n1. Add Book\n2. View Books\n3. Exit\n";
        cin >> choice;

        switch(choice) {
            case 1:
                if(count < 5) {
                    cout << "Enter book name: ";
                    cin >> books[count];
                    count++;
                } else {
                    cout << "Library Full!\n";
                }
                break;

            case 2:
                for(int i = 0; i < count; i++) {
                    cout << i + 1 << ". " << books[i] << endl;
                }
                break;

            case 3:
                return 0;

            default:
                cout << "Invalid Choice\n";
        }
    }
}