#include <iostream>
#include <string>

using namespace std;

string gcdOfStrings(string str1, string str2) {
    string res = "";
    int length = str1.length() / str2.length();

    for (int i = 0; i < length+1; i++) {
        if (str1[i] == str2[i])
            res += str2[i];
    }



    return res;
}

int main() {

    cout << gcdOfStrings("ABCDEF", "ABC") << endl;

    return 0;
}