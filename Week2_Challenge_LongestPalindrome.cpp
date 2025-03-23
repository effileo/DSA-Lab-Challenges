#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;
        int length = 0;
  // Count the frequency of each character
        for (char c : s) {
            freq[c]++;
        }
        bool hasOdd = false;
 // Compute the longest palindrome length
        for (auto it : freq) {
            length += (it.second / 2) * 2;  
            if (it.second % 2 == 1) {
                hasOdd = true; 
        }
 // If there's any odd character, one can be placed in the center
        if (hasOdd) {
            length++;
        }

        return length;
    }
};
