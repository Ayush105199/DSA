// class FindSumPairs {
// public:
//     FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        
//     }
    
//     void add(int index, int val ,vector<int>& nums2) {
//         nums2[index]+=val;
        
//     }
    
//     int count(int tot,vector<int>& nums1, vector<int>& nums2) {
//         int count=0;
//         unordered_map<int,int>m;
//         for(auto i:nums2)
//         m[i]++;

//         for(int i=0;i<nums1.size();i++)
//         {
//             int p=tot-nums1[i];
//             if(m.find(p))
//             {
//                 count+=m[p];
//             }
//         }
//         return count;
//     }
// };

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */


class FindSumPairs {
    vector<int>vec1;
    vector<int>vec2;
    unordered_map<int,int>m;
public:

    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        this->vec1=nums1;
        this->vec2=nums2;
        for(int num:vec2)
        {
            m[num]++;
        }
    }
    
    void add(int index, int val) {
        m[vec2[index]]--;
        if(m[vec2[index]]==0)
        m.erase(vec2[index]);

        vec2[index]+=val;
        m[vec2[index]]++;

    }
    
    int count(int tot) {
        int cnt=0;
        for(auto i:vec1)
        {
            // int p=tot-vec1[i];
            // if(m.find(p)!=m.end())
            // cnt+=m[p];
            cnt+=m[tot-i];
        }
        return cnt;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */