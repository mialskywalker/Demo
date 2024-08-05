#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    vector<vector<int>> res {{},{}};
    set<int> res1, res2;

    for (vector<int>::iterator it1 = nums1.begin(); it1 != nums1.end(); it1++)
        if(find(nums2.begin(), nums2.end(), *it1) == nums2.end())
            res1.insert(*it1);

    for (vector<int>::iterator it2 = nums2.begin(); it2 != nums2.end(); it2++)
        if(find(nums1.begin(), nums1.end(), *it2) == nums1.end())
            res2.insert(*it2);

    for (int el : res1)
        res[0].push_back(el);
    for (int el : res2)
        res[1].push_back(el);

    return res;
}

int main() {
    vector<int> nums1 {1,2,3,3};
    vector<int> nums2 {1,1,2,2};

    vector<vector<int>> a = findDifference(nums1, nums2);

    for (int i = 0; i < a.size(); i++) {
        for (int k = 0; k < a[i].size(); k++) {
            cout << a[i][k] << ' ';
        }
        cout << endl;
    }

}