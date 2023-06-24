#include <iostream>
#include <unordered_set>
#include <vector>

bool containsDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> seen;

    for (int num : nums) {
        if (seen.count(num) > 0) {
            return true;
        }
        seen.insert(num);
    }

    return false;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 1};

    bool result = containsDuplicate(nums);

    std::cout << std::boolalpha << result << std::endl;

    return 0;
}
