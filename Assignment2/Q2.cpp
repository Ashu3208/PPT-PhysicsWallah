#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int distributeCandies(vector<int>& candyType) {
    unordered_set<int> types;
    for (int candy : candyType) {
        types.insert(candy);
    }
    return min(types.size(), candyType.size() / 2);
}

int main() {
    vector<int> candyType = {1, 1, 2, 2, 3, 3};
    int result = distributeCandies(candyType);
    cout << "Maximum number of different types of candies Alice can eat: " << result << endl;
    return 0;
}
