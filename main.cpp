#include <iostream>
#include <vector>

using namespace std;

int countConsistentStrings(string allowed, vector<string>& words) {

    int countStrings = 0;
    bool isConsistent = false;

    for (string el : words) {
        for (char l : el) {
            if (allowed.find(l) != std::string::npos) {
                isConsistent = true;
            }
            else {
                isConsistent = false;
                break;
            }
        }
        if (isConsistent)
            countStrings++;
    }

    return countStrings;
}

int main() {

    vector<string> words {"cc","acd","b","ba","bac","bad","ac","d"};

    cout << countConsistentStrings("cad", words) << endl;
    return 0;
}
