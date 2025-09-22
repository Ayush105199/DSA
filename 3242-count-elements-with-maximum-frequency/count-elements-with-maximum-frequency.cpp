class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>m;
        int maxi=0;
        int a;
        for(auto i:nums)
        {
            m[i]++;
            a=m[i];
            if(a>maxi)
            maxi=a;
        }
        cout<<a<<" ";
        int res=0;
        for(auto i:m)
        {
            if(i.second==maxi)
            res+=i.second;

        }
        return res;
        
    }
};