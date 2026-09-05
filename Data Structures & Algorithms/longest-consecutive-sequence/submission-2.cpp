class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
        {
            return 0;
        }
        unordered_set<int>seen(nums.begin(),nums.end());
        int maxstreak=0;

        for(int i=0;i<nums.size();i++)
        {
            if(seen.find(nums[i]-1)==seen.end())
            {
                int current=nums[i];
                int streak=1;
                while(seen.find(current+1)!=seen.end())
                {
                    streak++;
                    current++;
                }
                maxstreak=max(streak,maxstreak);
            }
        }
        return maxstreak;
    }
};
