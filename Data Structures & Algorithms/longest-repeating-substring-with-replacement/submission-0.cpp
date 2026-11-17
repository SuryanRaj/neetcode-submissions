class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>count;
        int left=0,maxl=0,currf=0;
        for(int right=0;right<s.length();right++)
        {
            int windowsize=right-left+1;
            count[s[right]]++;
            currf=max(currf,count[s[right]]);

            while(windowsize-currf>k)
            {
                count[s[left]]--;
                left++;
                windowsize--;
            }
            maxl=max(maxl,windowsize);
        }
        return maxl;
    }
};