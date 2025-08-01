// class Solution {
// public:
//     int minimumOperations(vector<int>& nums) {
//         int n=nums.size();
//         unordered_map<int,int>m;
//         for(auto i:nums)
//         {
//             m[i]++;
//         }
//         vector<pair<int,int>>p(m.begin(),m.end());
//         sort(p.begin(),p.end(),[](pair<int,int>&a,pair<int,int>&b){
//             if (a.second != b.second)
//             return a.second > b.second;
//         return a.first > b.first; 
//         });

//         int a=p[0].first;
//         int b=p[1].first;

//         vector<int>a1;
//         vector<int>a2;
//         for(int i=0;i<n;i++)
//         {
//             if(i%2!=0)
//             a1[i]=a;
//             else
//             a1[i]=b;
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(i%2!=0)
//             a2[i]=b;
//             else
//             a2[i]=a;
//         }
// int cnt1=0,cnt2=0;
//         for(int i=0;i<n;i++)
//         {
//             if(nums[i]!=a1[i])
//             cnt1++;
//             if(nums[i]!=a2[i])
//             cnt2++;

//         }
       
//      return min(cnt1,cnt2);
//     }
// };

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 0;

        unordered_map<int, int> evenFreq, oddFreq;

        // Count frequencies at even and odd indices separately
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0)
                evenFreq[nums[i]]++;
            else
                oddFreq[nums[i]]++;
        }

        // Convert to sorted vectors
        vector<pair<int, int>> evenVec(evenFreq.begin(), evenFreq.end());
        vector<pair<int, int>> oddVec(oddFreq.begin(), oddFreq.end());

        // Sort by frequency descending
        auto cmp = [](pair<int, int>& a, pair<int, int>& b) {
            return a.second > b.second;
        };

        sort(evenVec.begin(), evenVec.end(), cmp);
        sort(oddVec.begin(), oddVec.end(), cmp);

        // Get top two elements (to avoid conflicts)
        int even1 = evenVec.size() > 0 ? evenVec[0].first : -1;
        int even1Freq = evenVec.size() > 0 ? evenVec[0].second : 0;
        int even2Freq = evenVec.size() > 1 ? evenVec[1].second : 0;

        int odd1 = oddVec.size() > 0 ? oddVec[0].first : -1;
        int odd1Freq = oddVec.size() > 0 ? oddVec[0].second : 0;
        int odd2Freq = oddVec.size() > 1 ? oddVec[1].second : 0;

        // If top elements at even and odd positions are different
        if (even1 != odd1)
            return n - (even1Freq + odd1Freq);
        else
            // Try second best for either even or odd
            return n - max(even1Freq + odd2Freq, even2Freq + odd1Freq);
    }
};
