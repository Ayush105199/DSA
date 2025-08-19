class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int l=0;
        unordered_map<char,int>m;
        int maxi=0;
        int cnt=0;
        int j=0;
        while(j<n)
        {
            if(m.find(s[j])==m.end())
            {
                cnt++;
                maxi=max(cnt,maxi);
                m[s[j]]++;
                j++;

            }
            else{
                m[s[l]]--;
                if(m[s[l]]==0)
                m.erase(s[l]);
                l++;
                cnt--;


            }
        }
        return maxi;
    }
};