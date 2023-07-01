#include <iostream>
#include <vector>
using namespace std;
vector<int> getRange(int start, int end) {
    return {start, end};
}
vector<vector<int>> findMissingRanges(vector<int>& nums, int lower, int upper) {
    vector<vector<int>> result;
    int start = lower;

    for (int num : nums) {
        if (num > start) {
            result.push_back(getRange(start, num - 1));
        }
        start = num + 1;
    }

    if (start <= upper) {
        result.push_back(getRange(start, upper));
    }

    return result;
}



int main() {
    vector<int> nums = {0, 1, 3, 50, 75};
    int lower = 0;
    int upper = 99;

    vector<vector<int>> result = findMissingRanges(nums, lower, upper);

    // Print the result
    for (int i = 0; i < result.size(); i++) {
        cout << "[" << result[i][0] << "," << result[i][1] << "]";
        if (i < result.size() - 1) {
            cout << ",";
        }
    }
    cout << endl;

    return 0;
}
