#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
    int remaining = 0;

    for (int i = 0; i < nums.size(); i++)
        if (nums[i] != val) {
            nums[remaining] = nums[i];
            remaining++;
        }

    return remaining;
}

int main() {
    vector<int> nums {0,1,2,2,3,0,4,2};
    cout << removeElement(nums, 2) << endl;

}