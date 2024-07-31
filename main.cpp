#include <iostream>
#include <vector>

using namespace std;

string reverseVowels(string s) {
    vector<char> vowels;
    vector<int> positions;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            vowels.push_back(s[i]);
            positions.push_back(i);
        }
    }

    vector<int>::reverse_iterator it;
    int k = 0;
    for (it = positions.rbegin(); it != positions.rend(); it++) {
        s[*it] = vowels[k];
        k++;
    }

    return s;
}

int main() {

    cout << reverseVowels("aA");

    return 0;
}
