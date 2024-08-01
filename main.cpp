#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

string reverseWords(string s) {
    istringstream istr(s);
    // vector<string> ss;
    //
    string curr;
    string result;
    // while (istr >> curr) {
    //     ss.push_back(curr);
    // }
    // bool bFirst = true;
    // for (auto it = ss.rbegin(); it != ss.rend(); it++) {
    //     if (bFirst) {
    //         result += *it;
    //         bFirst = false;
    //     }
    //     else {
    //         result += ' ' + *it;
    //     }
    // }
    bool bLast = true;
    while (istr >> curr) {
        if (bLast) {
            result = curr + result;
            bLast = false;
        }
        else {
            result = curr + ' ' + result;
        }

    }

    return result;
}

int main() {
    cout << reverseWords("the sky is blue") << endl;
}