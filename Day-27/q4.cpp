#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5, total;
    float per;

    cout << "Enter marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    per = total / 5.0;

    cout << "\n--- Marksheet ---\n";
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << per << endl;

    if (per >= 90)
        cout << "Grade: A+";
    else if (per >= 75)
        cout << "Grade: A";
    else if (per >= 60)
        cout << "Grade: B";
    else
        cout << "Grade: C";

    return 0;
}