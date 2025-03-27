class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n = nums.size();
        
        // Find the dominant element
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        
        // Find the dominant element
        int dominant = -1;
        for (auto& [num, count] : freq) {
            if (count > n / 2) {
                dominant = num;
                break;
            }
        }
        
        // If no dominant element found (though problem guarantees one exists)
        if (dominant == -1) return -1;
        
        // Track count of dominant element
        int dominant_count = 0;
        
        // Iterate through possible splits
        for (int i = 0; i < n - 1; i++) {
            // Count dominant element in left subarray
            if (nums[i] == dominant) {
                dominant_count++;
            }
            
            // Check left subarray dominance
            int left_size = i + 1;
            if (dominant_count > left_size / 2) {
                // Check right subarray dominance
                int right_size = n - left_size;
                int right_dominant_count = freq[dominant] - dominant_count;
                
                if (right_dominant_count > right_size / 2) {
                    return i; // Found valid split
                }
            }
        }
        
        // No valid split found
        return -1;
    }
};
