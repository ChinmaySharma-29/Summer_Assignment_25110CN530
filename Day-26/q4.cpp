#include <iostream>
using namespace std;

int main() {
    int answer, score = 0;

    cout << "Q1. Which planet is known as the Red Planet?\n";
    cout << "1. Earth\n2. Mars\n3. Venus\n4. Jupiter\n";
    cin >> answer;

    if (answer == 2)
        score++;

    cout << "\nQ2. How many days are there in a week?\n";
    cout << "1. 5\n2. 6\n3. 7\n4. 8\n";
    cin >> answer;

    if (answer == 3)
        score++;

    cout << "\nQ3. Which is the largest ocean in the world?\n";
    cout << "1. Atlantic Ocean\n2. Indian Ocean\n3. Arctic Ocean\n4. Pacific Ocean\n";
    cin >> answer;

    if (answer == 4)
        score++;

    cout << "\nYour Score = " << score << "/3";

    return 0;
}