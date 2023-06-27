#include <iostream>
#include <vector>

using namespace std;

bool isMonotonic(vector<int>& nums) {
    bool increasing = true;
    bool decreasing = true;
    int n = nums.size();

    for (int i = 1; i < n; ++i) {
        if (nums[i] > nums[i - 1]) {
            decreasing = false;
        } else if (nums[i] < nums[i - 1]) {
            increasing = false;
        }
    }

    return increasing || decreasing;
}

int main() {
    vector<int> nums = {1, 2, 2, 3};
    bool result = isMonotonic(nums);
    cout << boolalpha << "Is the array monotonic? " << result << endl;
    return 0;
}
