class Solution {
public:
    string decodeString(string s) {
       
       stack<pair<string, int>> st;
        string curString = "";
        int curNum = 0;

        for (char c : s) {

            if (isdigit(c)) {
                curNum = curNum * 10 + (c - '0');
            }
            else if (c == '[') {
               
                st.push({curString, curNum});
                curString = "";
                curNum = 0;
            }
            else if (c == ']') {
                auto [prevString, num] = st.top();
                st.pop();

                string temp = "";
                while (num--) temp += curString;

                curString = prevString + temp;
            }
            else {
                curString += c;
            }
        }

        return curString;
    }
};