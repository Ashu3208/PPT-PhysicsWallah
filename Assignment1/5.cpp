#include <iostream>
#include <vector>

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    int i = m - 1; // Index of last element in nums1
    int j = n - 1; // Index of last element in nums2
    int k = m + n - 1; // Index of last element in merged array (nums1)

    // Merge elements from the end of both arrays while there are elements in nums1 and nums2
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    // If there are remaining elements in nums2, copy them to the beginning of nums1
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

int main() {
    std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    std::vector<int> nums2 = {2, 5, 6};
    int n = 3;

    merge(nums1, m, nums2, n);

    // Output the merged array
    for (int i = 0; i < m + n; i++) {
        std::cout << nums1[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
