class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>seen;
        for(int i=0;i<nums.size();i++)
        {
            if(seen.find(nums[i])!=seen.end())
            {
                return nums[i];
            }
            seen.insert({nums[i],i});
        }
        return 0;
    }
};