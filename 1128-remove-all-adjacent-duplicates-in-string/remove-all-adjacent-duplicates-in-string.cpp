class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.length();
        stack<char>m;
        for(int i=0;i<n;i++)
        {
            if(m.empty())
            m.push(s[i]);
            else if(m.top()==s[i])
            m.pop();
            else
            m.push(s[i]);
        }
        string result="";
        while(!m.empty())
        {
            char p=m.top();
            m.pop();
            result+=p;
        }
        reverse(result.begin(),result.end());
        return result;
        
    }
};