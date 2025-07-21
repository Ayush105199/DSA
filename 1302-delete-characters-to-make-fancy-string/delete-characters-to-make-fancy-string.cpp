class Solution {
public:
    string makeFancyString(string s) {
        int n=s.length();
        string res="";
        int j=2;
        res+=s[0];
        res+=s[1];
        if(n<3)
        return s;
        for(int i=2;i<n;i++)
        {
            char a=s[i];
            if(a==res[j-1] && a==res[j-2])
            continue;
            else{
                res+=a;
                j++;
            }

        }
        return res;
        
    }
};