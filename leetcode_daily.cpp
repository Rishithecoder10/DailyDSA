class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int ans = 0;      
        int num = 0;      
        int j = 0;       

        for (int i = 0; i < nums.size(); i++) {  

            while ((nums[i] & num) != 0) { 
                num ^= nums[j++];   
            }

            num |= nums[i];         
            ans = max(ans, i - j + 1);  
        }

        return ans;
    }
};
