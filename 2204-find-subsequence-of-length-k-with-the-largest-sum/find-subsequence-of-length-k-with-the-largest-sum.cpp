class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        
        vector<pair<int, int>> result;
        for (int i = 0; i < nums.size(); i++) {
            result.push_back({nums[i], i});
        }
        sort(result.rbegin(),result.rend());
        // for(auto i : result)
        // cout<<i.first<<" "<<i.second<<endl;
        
        vector<pair<int,int>>finalre;
        int count=0;
        for(auto i:result)
        {
            if(count==k)
            break;
            finalre.push_back({i.first,i.second});
            count++;
        }
        sort(finalre.begin(), finalre.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });
    nums.clear();
    for(auto i:finalre)
    nums.push_back(i.first);
    // nums.clear();
    // for(auto i:finalre)
    // {
    //     nums.push_back(i.first);
    // }
        return nums;
    }
};