class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int res = 0;
        while (low <= high) {
            string s = to_string(low);
            int n = s.size();
            if (n % 2 == 0) {
                int count1 = 0;
                int count2 = 0;
                for (int i = 0; i < n / 2; i++) {
                    count1 += s[i]-'0';
                    count2 += s[n - i-1]-'0';
                    // n--;
                }
                if (count1 == count2)
                    res++;
            }
            low++;
        }
        return res;
    }
};