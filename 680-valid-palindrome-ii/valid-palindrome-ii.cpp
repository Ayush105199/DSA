class Solution {
public:
bool ispalindrome(string s,int start,int end)
{
    
    while(start<=end)
    {
        if(s[start]!=s[end])
        {
            return false;
            // cout<<s[start]<<" "<<s[end]<<endl;
        }
        start++;
        end--;
    }
    return true;
}
    bool validPalindrome(string s) {
        int n=s.length();
        int start=0;
        int end=n-1;
        while(start<end)
        {
            if(s[start]==s[end])
            {
                start++;
                end--;
            }
            if(s[start]!=s[end])
            {
                if(ispalindrome(s,start,end-1) || ispalindrome(s,start+1,end))
                return true;
                return false;
            }
        }
        return true;
        
        
    }
};