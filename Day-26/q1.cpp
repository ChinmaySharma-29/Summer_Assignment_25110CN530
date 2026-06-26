#include <iostream>
using namespace std;

int main() {
    int secret = 7;
    int guess;

    while (true) {
        cout << "Guess the number: ";
        cin >> guess;

        if (guess == secret) {
            cout << "Correct!";
            break;
        } else {
            cout << "Wrong Guess! Try Again.\n";
        }
    }

    return 0;
}