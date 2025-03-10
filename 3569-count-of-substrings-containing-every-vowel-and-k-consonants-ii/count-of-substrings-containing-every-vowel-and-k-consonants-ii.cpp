// class Solution {
// public:
//     long long countOfSubstrings(string word, int k) {
//         int n=word.length();
//         unordered_map<char,int>m;
//         int i=0;
//         int j=0;
//         int result=0;
//         int cc=0;
//         int p=0;
//         while(j<n)
//         {
//             if(word[j]=='a'||word[j]=='e'||word[j]=='i'||word[j]=='o'||word[j]=='u')
//             m[word[j]]++;
//             else
//             cc++;
//             if(cc==k && m.size()==5)
//             {
//                 result++;
//                 cc=0;
//                 p=j;
//                 j=i;
//                 i++;
//                 m.clear();
                
//             }
//             if(cc>k){
//             result=result+j-p;
//             cc=0;
//             j=i;
//             i++;
//             m.clear();
//             }
//             j++;   
//         }
//         return result;  
    
//     }
// };
class Solution {
public:
    long long countOfSubstrings(string word, int k) {
        int frequencies[2][128] = {};
        frequencies[0]['a'] = frequencies[0]['e'] = frequencies[0]['i'] = frequencies[0]['o'] = frequencies[0]['u'] = 1;

        long long response = 0;
        int currentK = 0, vowels = 0, extraLeft = 0, left = 0;

        for (int right = 0; right < word.length(); right++) {
            char rightChar = word[right];

            if (frequencies[0][rightChar]) {
                if (++frequencies[1][rightChar] == 1) vowels++;
            } else {
                currentK++;
            }

            while (currentK > k) {
                char leftChar = word[left++];
                if (frequencies[0][leftChar]) {
                    if (--frequencies[1][leftChar] == 0) vowels--;
                } else {
                    currentK--;
                }
                extraLeft = 0;
            }

            while (vowels == 5 && currentK == k && left < right && frequencies[0][word[left]] && frequencies[1][word[left]] > 1) {
                extraLeft++;
                frequencies[1][word[left++]]--;
            }

            if (currentK == k && vowels == 5) {
                response += (1 + extraLeft);
            }
        }

        return response;
    }
};