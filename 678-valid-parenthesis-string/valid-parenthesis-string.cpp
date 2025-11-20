class Solution {
public:
    bool checkValidString(string s) {
        int n = s.length();
        stack<int> br;
        stack<int> star;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(')
                br.push(i);
            else if (s[i] == '*')
                star.push(i);
            else
            {
                if (!br.empty())
                    br.pop();
                else if (!star.empty())
                    star.pop();
                else
                    return false;
                
            }
        }
        while (!br.empty()) 
        {
                    if (star.empty())
                        return false;
                    int a = br.top();
                    int b = star.top();
                    br.pop();
                    star.pop();
                    if (a > b)
                        return false;
        }

        return br.empty();
    }
};