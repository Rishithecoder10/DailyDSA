int minOperations(vector<int>& nums) {
        int n = nums.size();
    int operations = 0;
    int i = 0;

    while (i <= n - 3) {  
        if (nums[i] == 0) {  
            nums[i] ^= 1;
            nums[i+1] ^= 1;
            nums[i+2] ^= 1;
            operations++;
        }

       
        while (i < n && nums[i] == 1) {
            i++;
        }
    }

   
    for (int num : nums) {
        if (num == 0) return -1;
    }

    return operations;
    }
