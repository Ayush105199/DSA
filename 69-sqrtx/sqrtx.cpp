class Solution {
public:
    int mySqrt(int x) {
        int l = 0;
        int r = x;
        int ans = 0;
         while (l <= r) {
            int mid = l + (r - l) / 2;
            long long p = 1LL* mid * mid;
            if (p <= x) {
                ans = mid;
                l = mid + 1;
                
            }

            else
                
                r = mid - 1;
        }
        return ans;
    }
};