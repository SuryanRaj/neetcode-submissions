class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> seen;
        for(int i=0;i<numbers.size();i++)
        {
            int need=target-numbers[i];
            if(seen.find(need)!=seen.end())
            {
                if(seen[need]<i)
                {
                   return{seen[need]+1,i+1};
                }
            }
            seen.insert({numbers[i],i});
        }
        return {};
    }
};
