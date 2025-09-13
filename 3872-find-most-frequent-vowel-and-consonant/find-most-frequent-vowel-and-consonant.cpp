class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>v;
        unordered_map<char,int>c;
        int n=s.length();
        int cf=0;
        int vf=0;
        for(auto &i:s)
        {
            if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u')
            v[i]++;
            else
            c[i]++;
        }
        for(auto &i:v)
        {
            if(i.second>vf)
            vf=i.second;
        }
        for(auto &i:c)
        {
            if(i.second>cf)
            cf=i.second;
        }
        return (vf+cf);
        
    }
};