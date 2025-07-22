// class Solution {
// public:
//     int maximumUniqueSubarray(vector<int>& nums) {
//         int n = nums.size();
//         unordered_map<int, int> m;
//         for (auto i : nums)
//             m[i]++;
//         int i = 0;
//         int j = 0;
//         int sum = 0;
//         int sum1 = 0;
//         while (i < n && j < n) {
//             if (m.find(nums[i]) != m.end()) {
//                 sum=0;
//                 i++;
//                 j = i;
//             }
//             sum += nums[j];
//             j++;
//             sum1 = max(sum, sum1);
//         }

//         return sum1;
//     }
// };

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int result = 0, currentSum = 0, start = 0;
        unordered_set<int> seen;

        for (int end = 0; end < nums.size(); end++) {
            while (seen.find(nums[end]) != seen.end()) {
                seen.erase(nums[start]);
                currentSum -= nums[start];
                start++;
            }

            currentSum += nums[end];
            seen.insert(nums[end]);

            result = max(result, currentSum);
        }

        return result;
    }
};