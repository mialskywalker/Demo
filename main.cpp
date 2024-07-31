#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies) {
    vector<bool> kids;
    for (int kid : candies) {
        if (kid + extraCandies >= *max_element(candies.begin(), candies.end()))
            kids.push_back(true);
        else
            kids.push_back(false);
    }

    return kids;
}

int main() {
    vector<int> candies{12,1,12};
    int extra = 10;

    vector<bool> extraCandies = kidsWithCandies(candies, extra);

    for (bool c : extraCandies)
        cout << c << endl;

    return 0;
}
