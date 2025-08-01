class Solution {
public:
    int longestSubstring(string s, int k) {
        int n=s.length();
        if(n==0 || k>n)
        return 0;
        unordered_map<char,int>m;
        for(auto i:s)
        {
            m[i]++;
        }
for (auto it = m.begin(); it != m.end(); )
{
    if (it->second < k)
        it = m.erase(it);
    else
        ++it;
}
for(int i=0;i<n;i++)
{
    if(m[s[i]]<k)
    {
        int left=longestSubstring(s.substr(0,i),k);
        int right=longestSubstring(s.substr(i+1),k);
        return max(left,right);
    }
}
return s.size();
    }
};

