class Solution {
public:
long long t[100000];
long long solve(vector<vector<int>>& questions,int i,int n)
{
    if(i>=n)
    return 0;
    if(t[i]!=-1)
    return t[i];

    long long solve1 = questions[i][0] + solve(questions,(i+questions[i][1]+1),n);
    long long skip = solve(questions,(i+1),n);

    return t[i]=max(solve1,skip);
}
    long long mostPoints(vector<vector<int>>& questions) {
        int n=questions.size();
        memset(t,-1,sizeof(t));
        return solve(questions,0,n);

        
    }
};