class Solution {
public:
    string decodeString(string s) {
        stack<int> numStack;
        stack<string> stringStack;
        int k = 0;

        for (char c : s) 
        {
            // If digit, build the number (handles multi-digit like 12[a])
            if (isdigit(c)) {
                k = k * 10 + (c - '0');
            }
            // If opening bracket
            else if (c == '[') {
                numStack.push(k);
                k = 0;
                stringStack.push("[");
            }
            // If closing bracket, decode
            else if (c == ']') {
                string temp = "";
                while (!stringStack.empty() && stringStack.top() != "[") {
                    temp = stringStack.top() + temp;
                    stringStack.pop();
                }

                // Remove '['
                if (!stringStack.empty()) stringStack.pop();

                int count = numStack.top();
                numStack.pop();

                string replacement = "";
                while (count--) {
                    replacement += temp;
                }

                stringStack.push(replacement);
            }
            // Normal characters
            else {
                stringStack.push(string(1, c));
            }
        }



        

        // Build final result
        string result = "";
        while (!stringStack.empty()) {
            result = stringStack.top() + result;
            stringStack.pop();
        }

        return result;
        
        
    }
};