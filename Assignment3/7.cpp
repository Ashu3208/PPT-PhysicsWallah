#include <iostream>
#include <vector>
using namespace std;

string getRange(int start, int end) {
    if (start == end) {
        return to_string(start);
    } else {
        return to_string(start) + "->" + to_string(end);
    }
}
vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
    vector<string> result;
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

    vector<string> result = findMissingRanges(nums, lower, upper);

    // Print the result
    for (const string& range : result) {
        cout << range << " ";
    }
    cout << endl;

    return 0;
}
