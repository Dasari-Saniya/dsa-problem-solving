// Problem: Palindrome Number
// Platform: LeetCode
// Difficulty: Easy
// Approach: Reverse Integer
// Time Complexity: O(log n)

class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x < 0) {
            return false;
        }
        
        int original = x;
        
        long long reverse = 0;
        
        while(x > 0) {
            
            int digit = x % 10;
            
            reverse = reverse * 10 + digit;
            
            x = x / 10;
        }
        
        return original == reverse;
    }
};
