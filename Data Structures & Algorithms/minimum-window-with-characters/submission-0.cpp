class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>target;
        unordered_map<char,int>window;
        int left=0;
        int minlen=INT_MAX;
        int matched=0,startidx=0;
        for(int i=0;i<t.length();i++)
        {
            target[t[i]]++;
        }
        for(int right=0;right<s.length();right++)
        {
            window[s[right]]++;
            if(target.count(s[right]) && window[s[right]]==target[s[right]])
            {
                matched++;
            }
            while(matched==target.size())
            {
                if(right-left+1<minlen)
                {
                    minlen=right-left+1;
                    startidx=left;
                }
                window[s[left]]--;
                if(target.count(s[left]) && window[s[left]]<target[s[left]])
                {
                    matched--;
                }
                left++;
            }
        }
        if(minlen==INT_MAX)
        {
            return "";
        }
        else
        {
            return s.substr(startidx,minlen);
        }
    }
};
