class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> memory;
        for(int i=0;i<nums.size();i++)
        {
            int need=nums[i];
            if(memory.find(need)!=memory.end())
            {
                return true;
            }
            memory.insert({nums[i],i});
        }
        return false;
    }
};