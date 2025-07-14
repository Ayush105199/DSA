class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers)
    {
    sort(players.begin(),players.end());
    sort(trainers.begin(),trainers.end());
 int j=0;
 int i=0;
 int cnt=0;
 int n=players.size();
 int m=trainers.size();
    while(i<n && j<m)
    {
        if(trainers[j]>=players[i])
        {
            i++;
            j++;
            cnt++;
        }
        else
        j++;
    }
        return cnt;
    }
};