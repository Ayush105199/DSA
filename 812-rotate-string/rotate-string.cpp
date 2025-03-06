class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())
        return false;
        string p=s+s;
        // cout<<p<<endl;
        int q = p.find(goal);
        if(q<goal.length())
        return true;
        else
        return false;
        
    }
};