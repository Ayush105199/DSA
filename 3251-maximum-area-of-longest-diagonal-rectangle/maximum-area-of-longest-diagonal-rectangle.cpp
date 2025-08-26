class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n = dimensions.size();
        long double maxi = 0;
        int maxiar=0;
        long double  p = 0;
        for (int i = 0; i < n; i++) {
           int  q=dimensions[i][0];
            int r=dimensions[i][1];
            p = (q*q +r*r);           
            p = sqrt(p);

            if (p > maxi || (p==maxi && q*r>maxiar)) {

                maxi = p;
                maxiar=q*r;
            }
        }
        return maxiar;
    }
};