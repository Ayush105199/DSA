class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1,
                                    vector<vector<int>>& nums2) {
        map<int, int> m;
        for (const auto& pair : nums1) {
            m[pair[0]] = pair[1];
        }
        for (const auto& pair : nums2) {
            m[pair[0]] += pair[1];
            
        }
        vector<vector<int>> vec;
        for (const auto& p : m) {
        vec.push_back({p.first, p.second});
    }

    return vec;
        
    }
};