class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>>triplets;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            if(nums[i]>0)
            {
                break;
            }
            unordered_set<int>seen;
            for(int j=i+1;j<n;j++)
            {
                int tn=-(nums[i]+nums[j]);
                if(seen.find(tn)!=seen.end())
                {
                    triplets.insert({nums[i],nums[j],tn});
                }
                seen.insert(nums[j]);
            }
        }
        return vector<vector<int>>(triplets.begin(),triplets.end());
    }
};
