class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>bag;
      int maxl=0,left=0;
      for(int right=0;right<s.length();right++)
      {
        while(bag.count(s[right])>0)
        {
            bag.erase(s[left]);
            left++;
        }
        bag.insert(s[right]);
        int currsize=right-left+1;
        maxl=max(maxl,currsize);
      }
        return maxl;
    }
};
