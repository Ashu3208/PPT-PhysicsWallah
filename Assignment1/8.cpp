#include <iostream>
#include <unordered_set>
#include <vector>

std::vector<int> findErrorNums(std::vector<int>& nums) {
    std::vector<int> result;
    std::unordered_set<int> seen;
    int duplicate = 0;
    int missing = 0;

    for (int num : nums) {
        if (seen.count(num) > 0) {
            duplicate = num;
        }
        seen.insert(num);
    }

    for (int i = 1; i <= nums.size(); i++) {
        if (seen.count(i) == 0) {
            missing = i;
            break;
        }
    }

    result.push_back(duplicate);
    result.push_back(missing);

    return result;
}

int main() {
    std::vector<int> nums = {1, 2, 2, 4};

    std::vector<int> result = findErrorNums(nums);

    // Output the result
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
