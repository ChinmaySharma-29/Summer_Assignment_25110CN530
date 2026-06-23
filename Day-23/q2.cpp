#include <iostream>
#include <string>
using namespace std;

char firstRepeating(string str) {
    int freq[256] = {0};

    for (char ch : str) {
        freq[ch]++;
        if (freq[ch] > 1) {
            return ch;
        }
    }

    return '\0';
}

int main() {
    string str = "abcaef";

    char result = firstRepeating(str);

    if (result != '\0')
        cout << "First repeating character: " << result;
    else
        cout << "No repeating character found";

    return 0;
}