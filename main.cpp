#include <iostream>
#include <vector>

using namespace std;

int pivotIndex(vector<int>& nums) {
    if (nums.size() == 1)
        return 0;
    for(int i = 0; i < nums.size(); i++) {
        int leftSum = 0;
        int rightSum = 0;
        if (i == 0) {
            leftSum = 0;
            for (int k = i+1; k < nums.size(); k++)
                rightSum += nums[k];
            if (leftSum == rightSum)
                return 0;
        }
        else if (i == nums.size()-1) {
            rightSum = 0;
            for (int k = 0; k < nums.size()-1; k++)
                leftSum += nums[k];
            if (leftSum == rightSum)
                return i;
        }
        else {
            for (int left = 0; left < i; left++)
                leftSum += nums[left];
            for (int right = i+1; right < nums.size(); right++)
                rightSum += nums[right];
            if (leftSum == rightSum)
                return i;
        }
    }

    return -1;

}

int main() {
    vector<int> nums {4};
    cout << pivotIndex(nums) << endl;
}