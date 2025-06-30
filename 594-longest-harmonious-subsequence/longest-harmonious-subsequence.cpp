class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n=nums.size();
        map<int,int>m;
        for(auto i:nums)
        {
            m[i]++;
        }
        // vector<pair<int,int>>p(m.begin(),m.end());
        // sort(p.begin(),p.end(),[](const pair<int,int>&a,const pair<int,int>&b)
        // {
        //     return a.second>b.second;
        // })
        // for(auto i:p)
        // {
        //     if
        // }
        int maxi=0;
        int q=0;
        vector<pair<int,int>>p(m.begin(),m.end());
        for(int i=0;i<p.size()-1;i++)
        {
            if((p[i+1].first - p[i].first)==1){
            q=p[i+1].second+p[i].second;
            }
            maxi=max(maxi,q);
        }
       return maxi; 
    }
};