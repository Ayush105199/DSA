class Solution {
public:

    long long flowerGame(int n, int m) {
        // long long cnt=0;
        // for(long  i=1;i<=n;i++)
        // {
        //     for(long j=1;j<=m;j++)
        //     {
        //         if((i+j)%2!=0)
        //         cnt++;
        //     }
        // }

       return 1ll*((n+1)/2)*(m/2)+1ll*((m+1)/2)*(n/2);
    }
};