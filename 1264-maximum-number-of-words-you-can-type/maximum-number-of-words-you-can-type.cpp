class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map<char,int> m;
        for (auto c : brokenLetters) {
            m[c]++;
        }

        int n = text.length();
        int i = 0;
        int count = 0;

        while (i < n) {
            bool canType = true;
            while (i < n && text[i] != ' ') {
                if (m.find(text[i]) != m.end()) {
                    canType = false;
                }
                i++;
            }

            if (canType) count++; 
            while (i < n && text[i] == ' ') i++;
        }

        return count;
    }
};
