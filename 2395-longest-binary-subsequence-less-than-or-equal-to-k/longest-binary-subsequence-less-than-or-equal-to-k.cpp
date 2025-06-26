class Solution {
public:
    int longestSubsequence(string s, int k) {
        int n=s.length();
        int length=0;
        long  long powervalue=1;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='0')
            length++;
            else if(powervalue<=k)
            {
                k-=powervalue;
                length++;
            }
            if(powervalue<=k)
            powervalue=powervalue*2;
        }
        return length;
        
    }
};