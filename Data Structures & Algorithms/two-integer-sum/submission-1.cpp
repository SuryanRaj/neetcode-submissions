class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int , int>memory;
        for(int i=0;i<nums.size();i++)
        {
            int need=target-nums[i];
            if(memory.find(need)!=memory.end())
            {
                return{memory[need],i};
            }
            memory.insert({nums[i],i});
        }
        return {};
    }
};
