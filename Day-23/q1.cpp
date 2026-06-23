#include <iostream>
#include <string>
using namespace std;

char firstNonRepeating(string str) {
    int freq[256] = {0};

    for (char ch : str) {
        freq[ch]++;
    }

    for (char ch : str) {
        if (freq[ch] == 1) {
            return ch;
        }
    }

    return '\0';
}

int main() {
    string str = "aabbcddee";

    char result = firstNonRepeating(str);

    if (result != '\0')
        cout << "First non-repeating character: " << result;
    else
        cout << "No non-repeating character found";

    return 0;
}