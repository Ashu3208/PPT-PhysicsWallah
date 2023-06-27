#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maximumProduct(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int size = nums.size();
    return max(nums[size - 1] * nums[size - 2] * nums[size - 3], nums[0] * nums[1] * nums[size - 1]);
}

int main() {
    vector<int> nums = {1, 2, 3};
    int result = maximumProduct(nums);
    cout << "Maximum product: " << result << endl;
    return 0;
}
