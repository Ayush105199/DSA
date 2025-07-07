class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        int n=events.size();
    sort(events.begin(),events.end());
    int mini=events[0][0];
    int i=0;
    
    int cnt=0;
    priority_queue<int,vector<int>,greater<int>>p;

    while(!p.empty() || i<n)
    {
        while(i<n  && events[i][0]==mini)
        {
           p.push(events[i][1]);
           i++;
        }
        if(!p.empty()){
        p.pop();
        cnt++;
        }
        mini++;
        while(!p.empty()&&p.top()<mini)
        p.pop();



    }
    return cnt;
        
    }
};