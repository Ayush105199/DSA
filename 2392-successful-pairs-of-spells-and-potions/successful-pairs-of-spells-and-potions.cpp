class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success)
    {
        //brute force mwthod
    //     vector<int>ans;
    //     int n=spells.size();
    //     int m=potions.size();
    //     // sort(spells.begin(),spells.end());
    //     sort(potion.begin(),potion.end());
    //     for(int i=0;i<n;i++)
    //     {
    //         int count=0;
    //         for(int j=0;j<m;j++)
    //         {
    //             if(long long(spells[i]*potions[j])>=success)
    //             count++;

    //         }
    //         ans.push_back(count);
    //     }

    // return ans;

    //optimize approach
    vector<int>ans;
        int n=spells.size();
        int m=potions.size();
        sort(potions.begin(),potions.end());
        // int j=m-1;
        for(int i=0;i<n;i++)
        {
            
            long long minPotion = (success + spells[i] - 1) / spells[i]; 
        
      
        auto it = lower_bound(potions.begin(), potions.end(), minPotion);
        
        int count = potions.end() - it; 
        ans.push_back(count);
        }
        return ans;
    }
};