#include <iostream>
#include <vector>

std::vector<int> plusOne(std::vector<int>& digits) {
    int n = digits.size();
    
    // Start from the least significant digit
    for (int i = n - 1; i >= 0; --i) {
        // Increment the current digit
        digits[i]++;
        
        // Check if there is a carry
        if (digits[i] < 10) {
            // No carry, we are done
            return digits;
        }
        
        // Carry is needed, set the current digit to 0
        digits[i] = 0;
    }
    
    // If we reach here, it means there was a carry after the most significant digit
    // Create a new digit vector with an additional digit of 1 at the beginning
    digits.insert(digits.begin(), 1);
    
    return digits;
}

int main() {
    std::vector<int> digits = {1, 2, 3};
    
    std::vector<int> result = plusOne(digits);
    
    std::cout << "Result: ";
    for (int digit : result) {
        std::cout << digit << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
