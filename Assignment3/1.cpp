#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int closestSum = INT_MAX;

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int currentSum = nums[i] + nums[left] + nums[right];

            if (currentSum == target) {
                return target;
            }

            if (abs(currentSum - target) < abs(closestSum - target)) {
                closestSum = currentSum;
            }

            if (currentSum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    return closestSum;
}

int main() {
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    int result = threeSumClosest(nums, target);
    cout << result << endl;

    return 0;
}
