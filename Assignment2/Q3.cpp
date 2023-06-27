#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int findLHS(vector<int>& nums) {
    unordered_map<int, int> countMap;
    for (int num : nums) {
        countMap[num]++;
    }

    int maxLength = 0;
    for (auto it = countMap.begin(); it != countMap.end(); ++it) {
        if (countMap.find(it->first + 1) != countMap.end()) {
            maxLength = max(maxLength, it->second + countMap[it->first + 1]);
        }
    }

    return maxLength;
}

int main() {
    vector<int> nums = {1, 3, 2, 2, 5, 2, 3, 7};
    int result = findLHS(nums);
    cout << "Length of the longest harmonious subsequence: " << result << endl;
    return 0;
}
