#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;

    // Find the first pair of adjacent elements from the right such that nums[i] < nums[i+1]
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    if (i >= 0) {
        int j = n - 1;
        // Find the smallest element in the subarray to the right of nums[i] that is greater than nums[i]
        while (j >= 0 && nums[j] <= nums[i]) {
            j--;
        }
        swap(nums[i], nums[j]);
    }

    // Reverse the subarray to the right of nums[i]
    reverse(nums.begin() + i + 1, nums.end());
}

int main() {
    vector<int> nums = {1, 2, 3};
    nextPermutation(nums);

    // Print the result
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
