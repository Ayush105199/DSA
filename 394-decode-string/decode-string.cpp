class Solution {
public:
    string decodeString(string s) {
        stack<pair<string,int>>m;
        int num=0;
        string currs="";
        for(char c:s)
        {
            if(c=='[')
            {
                m.push({currs,num});
                currs="";
                num=0;
            }
            else if(c==']')
            {
                auto [prevstring,cnum]=m.top();
                m.pop();
                string temp="";
                for(int i=1;i<=cnum;i++)
                temp+=currs;

                currs=prevstring+temp;

            }
            else if(isdigit(c))
            {
                num=num*10+ c -'0';  
            }
            else{
                currs+=c;
            }

        }
        return currs;
        
    }
};