class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        while (n > 1) 
        {
            // vector<int> nums1;
            for (int i = 0; i < n - 1; i++) {
                int p = (nums[i] + nums[i + 1]) % 10;
                nums[i]=p;
            }
            n--;
            if (n == 1)
                return nums[0];
        }
        return 0;
    }
};