class Solution {
    public:
        vector<int> twoSum(vector<int> &nums, int target) {
            unordered_map<int, int> hash;  // Create a hash map to store numbers and their indices
            
            // First pass: Store each number and its index in the hash map
            for (int i = 0; i < nums.size(); i++) {
                hash[nums[i]] = i;
            }
    
            // Second pass: Find the complement for each number
            for (int i = 0; i < nums.size(); i++) {
                int complement = target - nums[i];  // Calculate the complement needed to reach the target
                
                // Check if the complement exists in the hash map and ensure it is not the same index
                if (hash.find(complement) != hash.end() && hash[complement] != i) {
                    return {i, hash[complement]};  // Return the indices of the two numbers
                }
            }
    
            // If no valid pair is found, return an empty vector
            return {};
        }
    };