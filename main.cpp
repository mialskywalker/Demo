#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {

    if (s.empty())
        return 0;

    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int maxNum = 0;
    int i = 0;
    int j = 0;

    while (i < g.size() && j < s.size()) {
        if (s[j] >= g[i]) {
            maxNum++;
            i++;
        }
        j++;
    }

    return maxNum;
}

int main() {
    vector<int> g {1,2};
    vector<int> s {1,2,3};

    cout << findContentChildren(g, s) << endl;
}