class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(int i=0;i<k;i++)
        {
            if(mp.empty())
            {
                return ans;
            }
           int currmaxfreq=INT_MIN;
           int currmaxele=0;
            for(auto j : mp)
            {
                if(j.second>currmaxfreq)
                {
                    currmaxfreq=j.second;
                    currmaxele=j.first;
                }
            }
            ans.push_back(currmaxele);
            mp.erase(currmaxele);
        }
        return ans;
    }
};
