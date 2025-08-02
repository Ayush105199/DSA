class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
    
        int n=nums.size();
        if(n==1)
        return 0;
        unordered_map<int,int>m1,m2;
        priority_queue<pair<int,int>>p1,p2;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            m1[nums[i]]++;
            else
            m2[nums[i]]++;
        }
        int odd=0;
        int even=0;
        if(n%2!=0)
        {
            even=n/2+1;
            odd=n/2;
        }
        else{
            even=n/2;
            odd=n/2;
        }
        for(auto i:m1)
        {
            p1.push({i.second,i.first});
        }
        for(auto i:m2)
        {
            p2.push({i.second,i.first});
        }
        auto t1=p1.top();
        p1.pop();
        auto t2=p2.top();
        p2.pop();
        int ans=0;

        if(t1.second==t2.second)
        {
            int op1=even-t1.first;
            if(!p2.empty())
            {
                op1+=odd-p2.top().first;
            }
            else
            {
                op1+=odd;
            }
            int op2=odd-t2.first;
            if(!p1.empty())
            {
                op2+=even-p1.top().first;
            }
            else
            op2+=even;

            ans=min(op1,op2);

        }
        else
        {
            ans=(even-t1.first)+(odd-t2.first);

        }
        return ans;





    }
};