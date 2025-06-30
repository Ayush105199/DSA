// class Solution {
// public:
//     int findLHS(vector<int>& nums) {
//         int n=nums.size();
//         map<int,int>m;
//         for(auto i:nums)
//         {
//             m[i]++;
//         }
//         int maxi=0;
//         int q=0;
//         vector<pair<int,int>>p(m.begin(),m.end());
//         for(int i=0;i<p.size()-1;i++)
//         {
//             if((p[i+1].first - p[i].first)==1){
//             q=p[i+1].second+p[i].second;
//             }
//             maxi=max(maxi,q);
//         }
//        return maxi; 
//     }
// };

// class Solution {
// public:
//     int findLHS(vector<int>& nums) {
//         // int n=nums.size();
//         map<int,int>m;
//         for(auto i : nums)
//         {
//             m[i]++;

//         }
//         int maxi=0;
//         for(auto [num,val]:m)
//         {
//             int q=0;
//             if(m.find(num+1)!=m.end())
//             {
//                 q=m[num+1]+m[num];
//             }
//             maxi=max(q,maxi);

//         }
//         return maxi;
        
//     }
// };

class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0,j=0;
        int maxi=0;
        while(j<n)
        {
            if(nums[j]-nums[i]>1)
            i++;
            if(nums[j]-nums[i]==1)
            {
                maxi=max(maxi,j-i+1);
            }
                j++;
        }
        return maxi;
    }
};