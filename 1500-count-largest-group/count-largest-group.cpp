class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> m;

        int sod = 0;
        for (int j = 1; j <= n; j++) {
            int sum = 0;
            int i=j;
            while (i > 0) {
                int rem=i%10;
                sum+=rem;
                i=i/10;
            }
            m[sum]++;
        }
        int c=0,a=0;
        for(auto &it:m)
        {
            if(it.second>c)
            {
                a=1;
                c=it.second;
            }
            else if(it.second==c)
            a++;



        }
        


        return a;
    }
};