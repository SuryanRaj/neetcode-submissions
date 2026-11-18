class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>target;
        unordered_map<char,int>window;
        int left=0;
         for(int i=0;i<s1.length();i++)
        {
            target[s1[i]]++;
        }
        for(int right=0;right<s2.length();right++)
        {
            window[s2[right]]++;
            if(right-left+1>s1.length())
            {
                window[s2[left]]--;
                if(window[s2[left]]==0)
                {
                    window.erase(s2[left]);
                }
                left++;
            }
             if(target==window)
        {
            return true;
        }
        }
            return false;
    }
};
