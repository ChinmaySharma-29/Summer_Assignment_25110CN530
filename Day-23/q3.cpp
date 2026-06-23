#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }

    int freq[256] = {0};

    for (char ch : s1) {
        freq[ch]++;
    }

    for (char ch : s2) {
        freq[ch]--;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string s1 = "listen";
    string s2 = "silent";

    if (isAnagram(s1, s2))
        cout << "Anagram";
    else
        cout << "Not Anagram";

    return 0;
}