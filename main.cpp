#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

bool uniqueOccurrences(vector<int> &arr) {
    map<int, int> numbers;
    set<int> unique;

    for (int i = 0; i < arr.size(); i++) {
        if (numbers.find(arr[i]) == numbers.end())
            numbers[arr[i]] = 1;
        else
            numbers[arr[i]]++;
    }

    for (pair<int, int> el: numbers) {
        unique.insert(el.second);
    }

    return numbers.size() == unique.size();
}

int main() {
    vector<int> arr{-3, 0, 1,-3,1,1,1,-3,10,0};
    cout << uniqueOccurrences(arr) << endl;
}
