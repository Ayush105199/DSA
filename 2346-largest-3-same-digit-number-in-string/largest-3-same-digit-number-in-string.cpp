class Solution {
public:
    string largestGoodInteger(string s) {
        int n=s.length();
        string result="";
        int x=0;
        int y=-1;
        for(int i=0;i<n-2;i++)
        {
            if((s[i]==s[i+1]) && (s[i+1]==s[i+2])){
            x=s[i]-'0';
            y=max(y,x);
            }
        }
        if(y==-1)
        return"";
        result=to_string(y)+to_string(y)+to_string(y);
        return result;

    }
};