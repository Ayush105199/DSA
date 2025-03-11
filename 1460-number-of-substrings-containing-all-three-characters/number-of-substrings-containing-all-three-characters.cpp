class Solution {
public:


    int numberOfSubstrings(string s) {


      
        //  int n=s.length();
        // unordered_map<char,int>m;
        // int i=0;
        // int j=0;
        // int result=0;
        // while(j<n)
        // {
        //     if(s[j]=='a'||s[j]=='b'||s[j]=='c')
        //     m[s[j]]++;
        //     if(m.size()==3)
        //     {
        //         result+=n-j;
        //         m[s[i]]--;
                
        //         if(m[s[i]]==0)
        //         m.erase(s[i]);

        //         i++;
                
        //     }
        //     j++;   
        // }
        // return result;  
        int n = s.length();
        unordered_map<char, int> m;
        int i = 0, j = 0, result = 0;

        while (j < n) {
            // Expand the window by including s[j]
            if (s[j] == 'a' || s[j] == 'b' || s[j] == 'c') {
                m[s[j]]++;
            }

            // When the window contains all three characters, start shrinking
            while (m.size() == 3) {
                result += (n - j); // All substrings ending at 'j' are valid
                
                // Shrink the window from the left
                if (s[i] == 'a' || s[i] == 'b' || s[i] == 'c') {
                    m[s[i]]--;
                    if (m[s[i]] == 0) {
                        m.erase(s[i]); // Remove from the map if count becomes zero
                    }
                }
                i++;
            }

            j++;
        }
        return result;
    }
};