#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimumDifference(vector<int>& nums, int k) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int minScore = nums[n - 1] - nums[0];

    for (int i = 1; i < n; ++i) {
        int minValue = min(nums[0] + k, nums[i] - k);
        int maxValue = max(nums[n - 1] - k, nums[i - 1] + k);
        minScore = min(minScore, maxValue - minValue);
    }

    return minScore;
}

int main() {
    vector<int> nums = {1};
    int k = 0;
    int result = minimumDifference(nums, k);
    cout << "Minimum score: " << result << endl;
    return 0;
}
